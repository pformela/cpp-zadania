#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>

double generate_random_double(double from, double to, int precision = 3)
{
  unsigned long long d = std::pow(10, precision);
  double value = from + (to - from) * (std::rand() % d);
  return value / (d * 1.0);
}

int main()
{
  std::srand(std::time(NULL));

  std::cout << generate_random_double(0, 1) << std::endl;

  return 0;
}