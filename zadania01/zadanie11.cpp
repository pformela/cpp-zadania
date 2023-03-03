#include <iostream>

int main()
{
  for (int i = 100; i >= 10; i--)
  {
    if (i % 7 != 0)
      std::cout << i << " ";
  }

  std::cout << std::endl;

  return 0;
}