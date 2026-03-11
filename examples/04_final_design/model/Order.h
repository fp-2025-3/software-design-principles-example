#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include <string>

class Order {
private:
    std::vector<std::string> products;
    std::vector<double> prices;

public:
    void addProduct(const std::string& name, double price);

    const std::vector<std::string>& getProducts() const;
    const std::vector<double>& getPrices() const;
};

#endif