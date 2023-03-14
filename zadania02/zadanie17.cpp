#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

int generate_random_number(int from, int to)
{
  return std::rand() % (to - from) + from + 1;
}

void print_chequer(int num)
{
  for (int i = 0; i < num; i++)
  {
    for (int j = 0; j < num; j++)
    {
      if ((i + j) % 2 == 0)
      {
        std::cout << "# ";
      }
      else
      {
        std::cout << "  ";
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

  print_chequer(num);

  return 0;
}