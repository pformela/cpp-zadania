#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <typeinfo>

int main()
{
  std::vector<char> numbers = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
  char input;
  std::string str_result = "";

  do
  {
    std::cin >> input;
    if (std::count(numbers.begin(), numbers.end(), input) > 0)
    {
      str_result += input;
    }
  } while (str_result.length() < 5);

  int number = std::stoi(str_result);

  std::cout << "Wprowadzono: " << number << std::endl;

  return 0;
}