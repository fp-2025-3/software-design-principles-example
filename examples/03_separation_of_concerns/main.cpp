#include "model/Order.h"
#include "services/OrderCalculator.h"
#include "presentation/OrderPrinter.h"
#include "infrastructure/OrderRepository.h"

int main() {

    Order order;

    order.addProduct("Laptop", 1200);
    order.addProduct("Mouse", 25);
    order.addProduct("Keyboard", 75);

    OrderCalculator calculator;
    double total = calculator.calculateTotal(order);

    OrderPrinter printer;
    printer.print(order, total);

    OrderRepository repository;
    repository.save(order, total);

    return 0;
}

