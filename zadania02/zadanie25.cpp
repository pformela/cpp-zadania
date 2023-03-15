#include <iostream>
#include <cmath>

void double_decimal(double &x)
{
  double whole, fractional;

  fractional = modf(x, &whole);

  x = whole + fractional * 2;
}

int main()
{
  double x = 3.22;
  double y = 3.6;

  std::cout << x << std::endl;
  std::cout << y << std::endl;

  double_decimal(x);
  double_decimal(y);

  std::cout << x << std::endl;
  std::cout << y << std::endl;

  return 0;
}