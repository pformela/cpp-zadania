#include <iostream>
#include <vector>

int main()
{
  std::vector<int> vect;
  int input;

  while (vect.size() < 10)
  {
    std::cin >> input;
    if (std::count(vect.begin(), vect.end(), input) == 0)
    {
      vect.push_back(input);
    }
  }

  std::cout << "The vector has 10 unique elements." << std::endl;

  for (int e : vect)
  {
    std::cout << e << " ";
  }

  std::cout << std::endl;

  return 0;
}