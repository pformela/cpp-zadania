#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

int generate_random_number(int from, int to)
{
  return std::rand() % (to - from) + from;
}

int generate_random_inside_pos(int from, int to)
{
  return std::rand() % (to - from - 2) + from + 1;
}

void print_square(char c, char c2, int num)
{
  int x_pos = generate_random_inside_pos(0, num);
  int y_pos = generate_random_inside_pos(0, num);

  std::cout << "X: " << x_pos << std::endl;
  std::cout << "Y: " << y_pos << std::endl;

  for (int i = 0; i < num; i++)
  {
    for (int j = 0; j < num; j++)
    {
      if (i == 0 || j == 0 || j == num - 1 || i == num - 1)
      {
        std::cout << c;
      }
      else if (i == x_pos && j == y_pos)
      {
        std::cout << c2;
      }
      else
      {
        std::cout << ' ';
      }
    }
    std::cout << std::endl;
  }
}

int main()
{
  std::srand(std::time(NULL));

  int num = generate_random_number(5, 10);

  std::cout << "Number: " << num << std::endl;

  print_square('#', '@', num);

  return 0;
}