#include <iostream>

int main()
{
  setlocale(LC_ALL, "");

  int num1;
  int num2;
  char op;

  std::cout << "Podaj pierwszą liczbę: ";
  std::cin >> num1;

  std::cout << "Podaj drugą liczbę: ";
  std::cin >> num2;

  std::cout << "Podaj operator: ";
  std::cin >> op;

  switch (op)
  {
  case '+':
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    break;
  case '-':
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
    break;
  case '*':
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
    break;
  case '/':
    if (num2 == 0 || num1 == 0)
    {
      std::cout << "Nie można dzielić przez 0." << std::endl;
      break;
    }
    std::cout << num1 << " / " << num2 << " = " << (float)num1 / num2 << std::endl;
    std::cout << num2 << " / " << num1 << " = " << (float)num2 / num1 << std::endl;
    break;
  default:
    std::cout << "Nieznany operator." << std::endl;
    break;
  }

  return 0;
}