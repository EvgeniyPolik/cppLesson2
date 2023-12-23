#include <iostream>

int main() {
  int productPrice = 150;
  int deliveryPrice = 20;
  int discount = 5;
  int totalPrice = productPrice + deliveryPrice - discount;
  std::cout << "----------------------------" << std::endl;
  std::cout << "Цена товара: " << productPrice << std::endl;
  std::cout << "Стоимость доставки: " << deliveryPrice << std::endl;
  std::cout << "Размер скидки: " << discount << std::endl;
  std::cout << "----------------------------" << std::endl;
  std::cout << "Полная стоимость товара: " << totalPrice << " руб." << std::endl;  
}