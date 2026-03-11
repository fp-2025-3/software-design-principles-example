#include "model/Order.h"
#include "application/OrderService.h"

int main() {

    Order order;

    order.addProduct("Laptop", 1200);
    order.addProduct("Mouse", 25);
    order.addProduct("Keyboard", 75);

    OrderService orderService;

    orderService.processOrder(order);

    return 0;
}