#ifndef ORDER_SERVICE_H
#define ORDER_SERVICE_H

#include "../model/Order.h"
#include "../services/OrderCalculator.h"
#include "../presentation/OrderPrinter.h"
#include "../infrastructure/OrderRepository.h"

class OrderService {
private:
    OrderCalculator calculator;
    OrderPrinter printer;
    OrderRepository repository;

public:
    void processOrder(Order& order);
};

#endif