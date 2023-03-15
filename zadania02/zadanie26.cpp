#include <iostream>
#include <cmath>

double abs_val(double x)
{
  if (x < 0)
  {
    return -x;
  }

  return x;
}

int main()
{
  std::cout << abs_val(2.3) << std::endl;
  std::cout << abs_val(-2.3) << std::endl;

  return 0;
}