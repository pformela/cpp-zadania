#include <iostream>

int main()
{
  uint arr[3];
  uint sum{0};

  for (int i = 0; i < 3; i++)
  {
    std::cout << "Podaj " << i + 1 << " liczbę: ";
    std::cin >> arr[i];
  }

  uint max{arr[0]};

  for (const uint &e : arr)
  {
    if (e > max)
      max = e;
  }

  std::cout << "Największa liczba to: " << max << std::endl;

  for (const uint &e : arr)
  {
    if (e != max)
      sum += e;
  }

  for (int i = 0; i < max; i++)
  {
    std::cout << sum << std::endl;
  }
}