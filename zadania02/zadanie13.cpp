#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int generate_random_number(int from, int to)
{
  return std::rand() % (to - from) + from;
}

void print_char(int num_of_rows, int num_of_cols, char c)
{
  for (int i = 0; i < num_of_rows; i++)
  {
    for (int j = 0; j < num_of_cols; j++)
    {
      std::cout << c << " ";
    }
    std::cout << std::endl;
  }
}

int main()
{
  std::srand(std::time(NULL));
  int a = generate_random_number(5, 10);
  int b = generate_random_number(5, 10);

  char c;

  std::cout << "Podaj literę: ";
  std::cin >> c;

  std::cout << "Number of rows: " << a << std::endl;
  std::cout << "Number of cols: " << b << std::endl;

  print_char(a, b, c);

  return 0;
}