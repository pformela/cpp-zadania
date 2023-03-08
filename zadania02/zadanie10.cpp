#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int generate_random_number(int from, int to)
{
  return std::rand() % (to - from) + from;
}

int main()
{
  std::srand(std::time(NULL));
  char c;
  int num = generate_random_number(20, 30);

  std::cout << "Podaj literę: ";
  std::cin >> c;

  while (num > 0)
  {
    std::cout << c << " ";
    num--;
  }

  std::cout << std::endl;

  return 0;
}