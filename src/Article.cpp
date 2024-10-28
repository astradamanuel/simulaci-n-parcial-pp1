#include "Article.hpp"

Article::Article(const std::string &code, const std::string &name, double price)
    : code(code), name(name), price(price) {}

std::string Article::getCode() const { return code; }
std::string Article::getName() const { return name; }
double Article::getPrice() const { return price; }

void Article::showArticle() const {
    std::cout << "Code: " << code << ", Name: " << name << ", Price: $" << price << std::endl;
}
