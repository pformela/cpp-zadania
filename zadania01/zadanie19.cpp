#include <iostream>

int main()
{
  for (int i = 0; i < 1000; i++)
  {
    if (i % 6 == 0) {
      std::cout << i << " ";
    }
  }

  std::cout << std::endl;

  return 0;
}