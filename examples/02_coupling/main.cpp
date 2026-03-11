#include "Order.h"
#include "OrderCalculator.h"
#include "OrderPrinter.h"

int main() {

    Order order;

    order.addProduct("Laptop", 1200);
    order.addProduct("Mouse", 25);
    order.addProduct("Keyboard", 75);

    OrderCalculator calculator;
    double total = calculator.calculateTotal(order);

    OrderPrinter printer;
    printer.print(order, total);

    return 0;
}