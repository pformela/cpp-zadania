#include <iostream>

int main()
{
  int num_of_viewed = 0;
  int num_of_skipped = 0;

  for (int i = 1; i <= 120; i++)
  {
    if (i % 11 == 0 && i % 5 == 0)
    {
      ++num_of_skipped;
    }
    else
    {
      std::cout << i << " ";
      ++num_of_viewed;
    }
  }

  std::cout << std::endl;

  std::cout << "Wyświetlono " << num_of_viewed << " liczb." << std::endl;
  std::cout << "Pominięto " << num_of_skipped << " liczb." << std::endl;

  return 0;
}