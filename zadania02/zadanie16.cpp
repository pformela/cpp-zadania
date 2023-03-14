#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

int generate_random_number(int from, int to)
{
  return std::rand() % (to - from) + from + 1;
}

void print_square(int num)
{
  std::string row(num, '#');

  for (int i = 0; i < num; i++)
  {
    std::cout << row << std::endl;
  }
}

int main()
{
  std::srand(std::time(NULL));

  int num = generate_random_number(5, 12);

  std::cout << "Number: " << num << std::endl;

  print_square(num);

  return 0;
}