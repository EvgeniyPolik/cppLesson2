#include <iostream>

int main() {
  int workDurationInMinutes = 480;
  int orderDurationInMinutes = 2;
  int orderCollectionDurationInMinutes = 4;
  std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену." << std::endl;
  std::cout << "Введите длительность смены в минутах: " << workDurationInMinutes << std::endl;
  std::cout << "Сколько минут клиент делает заказ? " << orderDurationInMinutes << std::endl;
  std::cout << "Сколько минут кассир собирает заказ? " << orderCollectionDurationInMinutes << std::endl;
  std::cout << "--------Считаем--------" << std::endl;
  int clientsCounts = workDurationInMinutes / (orderDurationInMinutes + orderCollectionDurationInMinutes);
  std::cout << "За смену длиной " << workDurationInMinutes << " минут кассир успеет обслужить " << clientsCounts << " клиентов." << std::endl;  
}