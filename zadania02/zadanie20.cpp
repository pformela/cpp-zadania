#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

int generate_random_odd_number(int from, int to)
{
  int num;

  do
  {
    num = std::rand() % (to - from) + from;
  } while (num % 2 == 0);

  return num;
}

void print_pyramid(char c, int num)
{
  for (int i = 1; i <= num; i += 2)
  {
    std::cout << std::string((num - i) / 2, ' ') << std::string(i, c) << std::endl;
  }
}

void print_diamond(char c, int num)
{
  for (int i = 1; i <= num; i += 2)
  {
    std::cout << std::string((num - i) / 2, ' ') << std::string(i, c) << std::endl;
  }

  for (int i = num - 2; i >= 1; i -= 2)
  {
    std::cout << std::string((num - i) / 2, ' ') << std::string(i, c) << std::endl;
  }
}

int main()
{
  std::srand(std::time(NULL));

  int num = generate_random_odd_number(7, 21);

  std::cout << "Number: " << num << std::endl;

  print_pyramid('#', num);

  std::cout << std::endl;

  print_diamond('#', num);

  return 0;
}