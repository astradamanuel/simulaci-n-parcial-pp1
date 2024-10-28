#include <iostream>
#include "Article.hpp"
#include "Customer.hpp"
#include "Order.hpp"

int main() {
    // Crear algunos artículos
    Article* article1 = new Article("A001", "Facial Cream", 15.99);
    Article* article2 = new Article("A002", "Lipstick", 7.99);
    Article* article3 = new Article("A003", "Perfume", 25.99);

    // Crear algunos clientes
    Customer* customer1 = new Customer("C001", "Alice Smith", "123 Main St");
    Customer* customer2 = new Customer("C002", "Bob Johnson", "456 Secondary St");

    // Crear pedidos para los clientes y agregar artículos
    Order* orderCustomer1 = new Order("O001", customer1);
    orderCustomer1->addArticle(article1);
    orderCustomer1->addArticle(article2);
    
    Order* orderCustomer2 = new Order("O002", customer2);
    orderCustomer2->addArticle(article2);
    orderCustomer2->addArticle(article3);

    // Mostrar los pedidos de cada cliente
    std::cout << "Pedidos de los clientes:\n";
    orderCustomer1->showOrder();
    orderCustomer2->showOrder();

    // Liberar la memoria asignada para evitar fugas
    delete article1;
    delete article2;
    delete article3;
    delete customer1;
    delete customer2;
    delete orderCustomer1;
    delete orderCustomer2;

    return 0;
}
