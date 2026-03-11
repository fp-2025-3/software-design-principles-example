#include "OrderRepository.h"
#include <fstream>

using namespace std;

void OrderRepository::save(const Order& order, double total) const {

    ofstream file("orders.txt", ios::app);

    if (!file.is_open())
        return;

    file << "Order:\n";

    for (size_t i = 0; i < order.getProducts().size(); i++) {
        file << order.getProducts()[i]
             << " "
             << order.getPrices()[i]
             << endl;
    }

    file << "Total: " << total << endl;
    file << "--------------------\n";

    file.close();
}