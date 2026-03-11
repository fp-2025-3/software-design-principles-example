#include "OrderCalculator.h"

double OrderCalculator::calculateTotal(const Order& order) const {

    double total = 0;

    for (double price : order.getPrices()) {
        total += price;
    }

    if (total > 100) {
        total *= 0.9;
    }

    return total;
}