#include <iostream>
#include <vector>

int main()
{
  std::vector <int> vect = {3, 612, 52, 77, 81, 832, 544, 234, 9, 11};
  std::vector <int> newVect;

  for (int e : vect)
  {
    if (e % 2 == 0) {
      newVect.insert(newVect.begin(), e);
    }
    else {
      newVect.push_back(e);
    }
  }

  for (int e : newVect)
  {
    std::cout << e << " ";
  }

  std::cout << std::endl;

  return 0;

}