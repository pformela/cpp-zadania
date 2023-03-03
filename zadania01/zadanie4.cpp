#include <iostream>

int main()
{
  char c;
  char samogloski[] = {'a', 'e', 'i', 'o', 'u', 'y'};
  char spolgloski[] = {'b',
                       'c',
                       'd',
                       'f',
                       'g',
                       'h',
                       'j',
                       'k',
                       'l',
                       'm',
                       'n',
                       'p',
                       'r',
                       's',
                       't',
                       'w',
                       'z'};

  // int cyfry[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::cout << "Podaj literę: ";
  std::cin >> c;

  if (c >= 48 and c <= 48 + 9)
  {
    std::cout << "Podana litera jest cyfrą" << std::endl;
    return 0;
  }

  bool samogloska{false};

  for (int i = 0; i < sizeof(samogloski) / sizeof(samogloski[0]); i++)
  {
    if (c == samogloski[i])
    {
      samogloska = true;
      break;
    }
  }

  if (samogloska)
    std::cout << "Podana litera jest samogłoską" << std::endl;
  else
    std::cout << "Podana litera jest spółgłoską" << std::endl;

  return 0;
}