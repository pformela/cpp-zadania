#include <iostream>
#include <vector>

int main()
{
  std::vector<char> vect;
  std::vector<char> samogloski{'a', 'e', 'i', 'o', 'u', 'y'};
  char input;

  bool isRunning = true;

  while (isRunning)
  {
    std::cin >> input;

    switch (input)
    {
    case '!':
      isRunning = false;
      break;
    case '*':
      if (vect.size() > 0)
      {
        vect.erase(vect.begin());
      }
      break;
    case '#':
      if (vect.size() > 0)
      {
        vect.pop_back();
      }
      break;
    default:
      if (std::count(samogloski.begin(), samogloski.end(), input) > 0)
      {
        vect.insert(vect.begin(), input);
      }
      else
      {
        vect.push_back(input);
      }
    }

    for (char e : vect)
    {
      std::cout << e << " ";
    }

    std::cout << std::endl;
  }

  return 0;
}