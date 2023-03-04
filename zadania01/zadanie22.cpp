#include <iostream>
#include <vector>

int main()
{
  std::vector <int> myVect;
  int input;

  while(true)
  {
    std::cin >> input;
    myVect.push_back(input);

    if (myVect.size() >= 2 && myVect.back() == myVect[myVect.size() -2])
    {
      break;
    }
  }

  std::cout << "The last two elements are equal." << std::endl;

  return 0;
}