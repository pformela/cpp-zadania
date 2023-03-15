#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>
#include <cstdlib>

int generate_random_number(int min, int max)
{
  return std::rand() % (max - min) + min + 1;
}

void add_to_file(int min, int max)
{
  int num;
  std::ofstream out;

  out.open("zadanie31.txt", std::ios::app);

  do
  {
    num = generate_random_number(min, max);
    std::cout << num << std::endl;

    out << num << std::endl;
  } while (num != 1000);
}

int main()
{
  std::srand(std::time(NULL));

  add_to_file(1, 1000);

  return 0;
}