#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

int generate_random_number(int from, int to)
{
  return std::rand() % (to - from) + from + 1;
}

void print_triangle(char c, int num, bool left = true)
{
  for (int i = 0; i < num; i++)
  {
    if (left)
    {
      std::cout << std::string(i + 1, c) << std::endl;
    }
    else
    {
      std::cout << std::string(num - i - 1, ' ') << std::string(i + 1, c) << std::endl;
    }
  }
}

int main()
{
  std::srand(std::time(NULL));

  int num = generate_random_number(5, 12);

  std::cout << "Number: " << num << std::endl;

  print_triangle('#', num, true);

  std::cout << std::endl;

  print_triangle('#', num, false);

  return 0;
}