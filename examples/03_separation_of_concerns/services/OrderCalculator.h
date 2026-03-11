#ifndef ORDER_CALCULATOR_H
#define ORDER_CALCULATOR_H

#include "../model/Order.h"

class OrderCalculator {
public:
    double calculateTotal(const Order& order) const;
};

#endif