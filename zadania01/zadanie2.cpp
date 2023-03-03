#include <iostream>

int main()
{
  int num;

  std::cout << "Podaj liczbę całkowitą: ";
  std::cin >> num;

  std::cout << "Liczba " << num << ((num % 2 == 0) ? " jest parzysta" : " jest nieparzysta") << std::endl;
}