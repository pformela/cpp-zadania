#include <iostream>

bool check_if_even(int num)
{
  return (!(num & 1));
}

int main()
{
  std::cout << "Liczba 2 jest " << (check_if_even(2) ? "parzysta" : "nieparzysta") << std::endl;
  std::cout << "Liczba 5 jest " << (check_if_even(5) ? "parzysta" : "nieparzysta") << std::endl;
  std::cout << "Liczba 1524 jest " << (check_if_even(1524) ? "parzysta" : "nieparzysta") << std::endl;
  std::cout << "Liczba 625467 jest " << (check_if_even(625467) ? "parzysta" : "nieparzysta") << std::endl;

  return 0;
}