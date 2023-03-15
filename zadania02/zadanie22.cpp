#include <iostream>
#include <string>

void triangle(int n, int width, char c)
{
  for (int i = 1; i <= n; i += 2)
  {
    std::cout << std::string((width - i) / 2, ' ') << std::string(i, c) << std::endl;
  }
}

void tree(int n, char c)
{
  int starting_width = 5;

  for (int i = 0; i < n; i++)
  {
    triangle(starting_width, n * 3, c);
    starting_width += 2;
  }
}

int main()
{
  tree(4, '#');

  return 0;
}