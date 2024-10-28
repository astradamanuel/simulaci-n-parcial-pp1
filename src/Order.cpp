#include "Order.hpp"

Order::Order(const std::string &orderId, Customer *customer)
    : orderId(orderId), customer(customer) {}

void Order::addArticle(Article *article) {
    articles.push_back(article);
}

void Order::showOrder() const {
    std::cout << "Order ID: " << orderId << ", Customer: ";
    customer->showCustomer();
    std::cout << "Articles in order:" << std::endl;
    for (const auto &article : articles) {
        article->showArticle();
    }
}
