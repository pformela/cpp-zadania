#include <iostream>
#include <vector>

int main()
{
  float a = 32.0;
  float b = 73.31;

  std::cout << "Wynik a * b = " << a / (1.0 / b) << std::endl;

  float a2 = 42.123;
  int b2 = 45;

  float res = 0;

  while (b2 > 0)
  {
    res += a2;
    b2--;
  }

  std::cout << "Wynik a2 * b2 = " << res << std::endl;

  return 0;
}