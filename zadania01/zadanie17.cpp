#include <iostream>

int main()
{
  int start = 6;
  int gap = 4;

  for (int i = 0; i < 100; i++)
  {
    std::cout << start << " ";
    start -= gap;
    if (i % 2 == 0) {
      gap = -gap - 2;
    }
    else {
      gap = -gap - 1;
    }
  }

  std::cout << std::endl;

  return 0;
}