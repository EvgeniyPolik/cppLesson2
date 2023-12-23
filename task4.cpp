#include <iostream>

int main() {
  int totalSumm = 4000000;
  int frontDoorsCount = 10;
  int flatsCont = 40;
  std::cout << "Приветсвуем вас в калькуляторе квартплаты!" << std::endl;
  std::cout << "Введите сумму, указанную в квитанции: " << totalSumm << std::endl;
  std::cout << "Сколько подъездов в вашем доме? " << frontDoorsCount << std::endl;
  std::cout << "Сколько квартир в каждом подъезде? "<< flatsCont << std::endl;
  std::cout << "--------Считаем--------" << std::endl;
  int flatSumm = totalSumm / (frontDoorsCount * flatsCont);
  std::cout << "Каждая квартира должна заплатить по " << flatSumm << " руб." << std::endl;  
}