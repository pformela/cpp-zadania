#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

int generate_random_number(int from, int to)
{
  return std::rand() % (to - from) + from + 1;
}

void print_square(int num, char c)
{
  for (int i = 0; i <= num; i++)
  {
    for (int j = 0; j <= num; j++)
    {
      if (i == 0 || j == 0 || i == num || j == num)
      {
        std::cout << c;
      }
      else
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
}

int main()
{
  std::srand(std::time(NULL));

  int num = generate_random_number(5, 12);

  std::cout << "Number: " << num << std::endl;

  print_square(num, '#');

  return 0;
}