#include <iostream>

int main()
{
  int num = 3;

  for (int i = 0; i < 100; i++)
  {
    std::cout << num << " ";
    if (i % 4 == 0)
      num -= 2;
    else if (i % 4 == 1)
      num += 1;
    else if (i % 4 == 2)
      num -= 1;
    else
      num += 2;
  }

  std::cout << std::endl;

  return 0;
}