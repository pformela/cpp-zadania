#include <iostream>

int main()
{
  int num[5];
  bool isAscending = true;

  for (int i = 0; i < 5; i++)
  {
    std::cout << "Podaj liczbę: ";
    std::cin >> num[i];
    if (i != 0) {
      isAscending = isAscending && num[i] > num[i-1];
    }
  }

  std::cout << "Czy liczby są rosnące? " << (isAscending ? "TAK" : "NIE") << std::endl;

  return 0;
}