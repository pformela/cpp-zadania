#include <iostream>
#include <cmath>

double linear_function(double a, double x, double b)
{
  return a * x + b;
}

int main()
{
  std::cout << linear_function(2, 3, 4) << std::endl;
  std::cout << linear_function(2, 3, 5) << std::endl;
  std::cout << linear_function(2, 3, 6) << std::endl;

  return 0;
}