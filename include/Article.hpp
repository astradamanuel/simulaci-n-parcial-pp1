#ifndef ARTICLE_HPP
#define ARTICLE_HPP

#include <iostream>
#include <string>

class Article {
private:
    std::string code;
    std::string name;
    double price;

public:
    Article(const std::string &code, const std::string &name, double price);
    std::string getCode() const;
    std::string getName() const;
    double getPrice() const;

    void showArticle() const; // Declaración sin implementación
};

#endif // ARTICLE_HPP
