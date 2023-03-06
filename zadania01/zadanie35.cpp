#include <iostream>
#include <vector>

int main()
{
  std::vector<int> v = {1, 74, 891, 22, 91, 8, 12, 5, 3, 6};

  for (auto it = v.begin(); it != v.end(); ++it)
  {
    std::cout << *it << std::endl;
  }

  std::vector<int>::iterator iter = v.begin();

  while (iter != v.end())
  {
    std::cout << *iter++ << " ";
  }

  return 0;
}