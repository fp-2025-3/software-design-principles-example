#include "Order.h"

void Order::addProduct(const std::string& name, double price) {
    products.push_back(name);
    prices.push_back(price);
}

const std::vector<std::string>& Order::getProducts() const {
    return products;
}

const std::vector<double>& Order::getPrices() const {
    return prices;
}