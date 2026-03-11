#include "OrderPrinter.h"
#include <iostream>

using namespace std;

void OrderPrinter::print(const Order& order, double total) const {

    cout << "Products:\n";

    for (size_t i = 0; i < order.getProducts().size(); i++) {
        cout << order.getProducts()[i]
             << " - $" << order.getPrices()[i]
             << endl;
    }

    cout << "Total: $" << total << endl;
}