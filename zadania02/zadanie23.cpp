#include <iostream>
#include <string>

double power_iter(double x, int n)
{
  float result = 1;

  for (int i = 0; i < n; i++)
  {
    result *= x;
  }

  return result;
}

double power_rec(double x, int n)
{
  if (n == 0)
  {
    return 1;
  }

  return power_rec(x, n - 1) * x;
}

int power_iter(int x, int n)
{
  int result = 1;

  for (int i = 0; i < n; i++)
  {
    result *= x;
  }

  return result;
}

int power_rec(int x, int n)
{
  if (n == 0)
  {
    return 1;
  }

  return power_rec(x, n - 1) * x;
}

int main()
{

  std::cout << power_iter(2.7, 3) << std::endl;
  std::cout << power_iter(3.3, 3) << std::endl;
  std::cout << power_rec(2.7, 3) << std::endl;
  std::cout << power_rec(3.3, 3) << std::endl;

  std::cout << power_iter(3, 3) << std::endl;
  std::cout << power_rec(2, 3) << std::endl;

  return 0;
}