#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
  std::srand(std::time(NULL));
  std::vector<char> letters;
  char letter;
  std::string word;
  int num_of_draws = 0;

  for (int i = 65; i < 91; i++)
  {
    letters.push_back(i);
  }

  for (int i = 97; i < 123; i++)
  {
    letters.push_back(i);
  }

  while (true)
  {
    letter = letters[std::rand() % letters.size()];
    num_of_draws++;
    if (letter == 'z' || letter == 'A')
    {
      break;
    }
    word += letter;
  }

  std::cout << "Wylosowano " << num_of_draws << " razy." << std::endl;
  std::cout << "Powstałe słowo: " << word << std::endl;

  return 0;
}