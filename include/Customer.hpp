#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <iostream>
#include <string>

class Customer {
private:
    std::string id;
    std::string name;
    std::string address;

public:
    Customer(const std::string &id, const std::string &name, const std::string &address);
    std::string getId() const;
    std::string getName() const;
    std::string getAddress() const;

    void showCustomer() const; // Declaración sin implementación
};

#endif // CUSTOMER_HPP
