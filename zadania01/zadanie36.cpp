#include <iostream>
#include <vector>
#include <cmath>

int main()
{
  float a = 3.0;
  float b = 4.0;
  float c = 5.0;

  if (a * a + b * b == c * c)
  {
    std::cout << "TAK" << std::endl;
  }
  else
  {
    std::cout << "NIE" << std::endl;
  }

  return 0;
}