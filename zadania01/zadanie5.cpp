#include <iostream>

int main()
{
  float arr[5];

  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  {
    std::cout << "Podaj " << i + 1 << " liczbę zmiennoprzecinkową: ";
    std::cin >> arr[i];
  }

  if ((int)arr[4] == 0)
  {
    std::cout << "Nie można dzielić przez 0" << std::endl;
    return 0;
  }

  float result = (((arr[0] + arr[1]) * arr[2]) - arr[3]) / arr[4];

  std::cout << "Wynik działania: " << result << std::endl;
}