#include <iostream>

int main()
{
  int init_num;
  int num;

  std::cout << "Podaj liczbę całkowitą: ";
  std::cin >> init_num;

  num = init_num;

  if (init_num < 0)
    --num;
  else if (init_num > 0)
    ++num;

  std::cout << "Liczba " << init_num << " po zmianach " << num << std::endl;

  std::cout << "Po zmianach liczba jest " << ((num % 2 == 0) ? "parzysta" : "nieparzysta")
            << std::endl;

  return 0;
}