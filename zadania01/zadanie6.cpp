#include <iostream>

int main()
{
  int num[5];
  int num_of_even = 0;
  int num_of_odd = 0;

  for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++)
  {
    std::cout << "Podaj " << i + 1 << " liczbę całkowitą: ";
    std::cin >> num[i];
    if (num[i] % 2 == 0)
      num_of_even++;
    else
      num_of_odd++;
  }

  std::cout << "Liczba parzystych: " << num_of_even << std::endl;
  std::cout << "Liczba nieparzystych: " << num_of_odd << std::endl;

  return 0;
}