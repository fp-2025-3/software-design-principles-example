#include "OrderService.h"

void OrderService::processOrder(Order& order) {

    double total = calculator.calculateTotal(order);

    printer.print(order, total);

    repository.save(order, total);
}