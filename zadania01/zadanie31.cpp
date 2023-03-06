#include <iostream>

int main()
{
  int a = 0;

  std::cout << ++a << std::endl;
  std::cout << a << std::endl;

  std::cout << (a++ - 1 && 1) << std::endl;
  std::cout << a << std::endl;

  std::cout << 1 + 2 * 3 - 4 / 5 << std::endl;

  std::cout << (true && false) << std::endl;

  return 0;
}