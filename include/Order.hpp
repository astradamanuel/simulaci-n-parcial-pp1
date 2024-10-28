#ifndef ORDER_HPP
#define ORDER_HPP

#include <iostream>
#include <vector>
#include "Customer.hpp"
#include "Article.hpp"

class Order {
private:
    std::string orderId;
    Customer *customer;
    std::vector<Article*> articles;

public:
    Order(const std::string &orderId, Customer *customer);
    void addArticle(Article *article);
    void showOrder() const; // Declaración sin implementación
};

#endif // ORDER_HPP
