#include <iostream>
#include <cmath>

double convert_nums_to_double(int a, int b)
{
  int num_of_digits = int(std::log10(std::abs(b)) + 1);
  return double(a) + double(std::abs(b)) / std::pow(10, num_of_digits);
}

int main()
{
  int a;
  int b;

  std::cout << "Podaj liczbę całkowitą: ";
  std::cin >> a;
  std::cout << "Podaj liczbę dziesiętną: ";
  std::cin >> b;

  std::cout << convert_nums_to_double(a, b) << std::endl;

  return 0;
}