#ifndef ORDER_REPOSITORY_H
#define ORDER_REPOSITORY_H

#include "../model/Order.h"

class OrderRepository {
public:
    void save(const Order& order, double total) const;
};

#endif