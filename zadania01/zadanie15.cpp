#include <iostream>

int main()
{
  int prev = 1;
  int repetitions = 1;

  for (int i = 0; i < 100; i++)
  {
    std::cout << prev << " ";
    if (repetitions == prev)
    {
      prev++;
      repetitions = 0;
    }
    repetitions++;
  }

  std::cout << std::endl;

  return 0;
}