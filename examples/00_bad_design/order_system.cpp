#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class OrderSystem {
private:
    vector<string> products;
    vector<double> prices;

public:

    void addProduct(string name, double price) {
        products.push_back(name);
        prices.push_back(price);
    }

    void processOrder() {

        double total = 0;

        // Calculate total
        for (size_t i = 0; i < prices.size(); i++) {
            total += prices[i];
        }

        // Apply discount
        if (total > 100) {
            total *= 0.9;
        }

        // Print order
        cout << "Products:\n";
        for (size_t i = 0; i < products.size(); i++) {
            cout << products[i] << " - $" << prices[i] << endl;
        }

        cout << "Total: $" << total << endl;

        // Save order to file
        ofstream file("orders.txt", ios::app);

        if (file.is_open()) {

            file << "Order:\n";

            for (size_t i = 0; i < products.size(); i++) {
                file << products[i] << " "
                     << prices[i] << endl;
            }

            file << "Total: " << total << endl;
            file << "---------------------\n";

            file.close();
        }

        // Simulate sending email
        cout << "Sending confirmation email..." << endl;
    }
};

int main() {

    OrderSystem system;

    system.addProduct("Laptop", 1200);
    system.addProduct("Mouse", 25);
    system.addProduct("Keyboard", 75);

    system.processOrder();

    return 0;
}