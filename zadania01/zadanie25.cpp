#include <iostream>
#include <vector>

int main()
{
  std::vector<int> v;
  int input;
  int multiplication_res;

  while (true)
  {
    std::cin >> input;
    v.push_back(input);
    std::cin >> input;
    v.push_back(input);

    multiplication_res = v.back() * v[v.size() - 2];

    if (multiplication_res < 1000)
    {
      v.push_back(multiplication_res);
    }
    else
    {
      break;
    }

    for (int e : v)
    {
      std::cout << e << " ";
    }

    std::cout << std::endl;
  }

  std::cout << std::endl;

  return 0;
}
