#include <iostream>

int main()
{
  int num;

  std::cout << "Podaj liczbę całkowitą: ";
  std::cin >> num;

  if (num % 5 == 0 && num % 3 == 0)
    std::cout << "Liczba " << num << " jest podzielna przez 3 i 5" << std::endl;
  else if (num % 5 != 0 && num % 3 == 0)
    std::cout << "Liczba " << num << " jest podzielna przez 3" << std::endl;
  else if (num % 5 == 0 && num % 3 != 0)
    std::cout << "Liczba " << num << " jest podzielna przez 5" << std::endl;
  else
    std::cout << "Liczba " << num << " nie jest podzielna przez 3 ani 5" << std::endl;
}
