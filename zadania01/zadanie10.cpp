#include <iostream>

int main()
{
  for (int i = 1; i <= 100; i++)
    std::cout << i << " ";

  std::cout << std::endl;

  int i = 1;

  while (i <= 100)
  {
    std::cout << i << " ";
    i++;
  }

  std::cout << std::endl;

  i = 1;

  do
  {
    std::cout << i << " ";
    i++;
  } while (i <= 100);

  std::cout << std::endl;

  return 0;
}