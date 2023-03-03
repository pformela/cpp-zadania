#include <iostream>

int main()
{
  int prev = 100;
  int gap = 1;

  for (int i = 0; i < 100; i++)
  {
    std::cout << prev << " ";
    prev -= gap;
    gap++;
  }

  return 0;
}