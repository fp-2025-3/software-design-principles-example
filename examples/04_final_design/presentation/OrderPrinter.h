#ifndef ORDER_PRINTER_H
#define ORDER_PRINTER_H

#include "../model/Order.h"

class OrderPrinter {
public:
    void print(const Order& order, double total) const;
};

#endif