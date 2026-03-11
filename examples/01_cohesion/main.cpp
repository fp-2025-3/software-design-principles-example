#include <iostream>
#include <fstream>
#include "Order.h"

using namespace std;

int main() {

    Order order;

    order.addProduct("Laptop", 1200);
    order.addProduct("Mouse", 25);
    order.addProduct("Keyboard", 75);

    double total = 0;

    // Calculate total
    for (double price : order.getPrices()) {
        total += price;
    }

    // Apply discount
    if (total > 100) {
        total *= 0.9;
    }

    // Print order
    cout << "Products:\n";

    for (size_t i = 0; i < order.getProducts().size(); i++) {
        cout << order.getProducts()[i]
             << " - $" << order.getPrices()[i]
             << endl;
    }

    cout << "Total: $" << total << endl;

    // Save order to file
    ofstream file("orders.txt", ios::app);

    if (file.is_open()) {

        file << "Order:\n";

        for (size_t i = 0; i < order.getProducts().size(); i++) {
            file << order.getProducts()[i]
                 << " "
                 << order.getPrices()[i]
                 << endl;
        }

        file << "Total: " << total << endl;
        file << "------------------\n";

        file.close();
    }

    cout << "Sending confirmation email..." << endl;

    return 0;
}