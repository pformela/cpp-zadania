#include <iostream>

int main()
{
  char temp;
  int num_of_chars = 0;

  while (true)
  {
    std::cout << "Wprowadź znak: ";
    std::cin >> temp;
    if (temp == 'x')
      break;
    num_of_chars++;
  }

  std::cout << "Wprowadzono " << num_of_chars << " znaków" << std::endl;

  return 0;
}