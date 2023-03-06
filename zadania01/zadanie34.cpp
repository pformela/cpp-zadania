#include <iostream>
#include <vector>

int main()
{
  char input;
  int sum = 0;

  do
  {
    std::cout << "Wprowadź znak: ";
    std::cin >> input;
    if ((input >= 48 && input <= 57) || (input >= 65 && input <= 90) || (input >= 97 && input <= 122))
      sum += (int)input;
    std::cout << "Aktualna suma: " << sum << std::endl;
  } while (sum <= 350);
}