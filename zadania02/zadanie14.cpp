#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

std::vector<int> generate_numbers()
{
  std::vector<int> res;
  int num;

  int from = 1;
  int to = 1000;

  while (true)
  {
    num = std::rand() % (to - from) + from + 1;
    std::cout << "wylosowano: " << num << std::endl;

    if (num == 1000)
    {
      break;
    }
    else
    {
      res.push_back(num);
      from = num;
    }
  }

  return res;
}

int main()
{
  std::srand(std::time(NULL));

  std::vector<int> numbers = generate_numbers();

  for (auto e : numbers)
  {
    std::cout << e << std::endl;
  }

  return 0;
}