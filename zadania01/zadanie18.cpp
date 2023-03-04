#include <iostream>

int main()
{
  int num = 0;

  while (num < 1 || num > 10)
  {
    std::cout << "Podaj liczbę: ";
    std::cin >> num;

    std::cout << "Dwukrotność liczby " << num << " to " << num * 2 << std::endl;
  }

  std::cout << "Podano wartość z przedziału <1, 10>. Koniec programu." << std::endl;

  return 0;
}