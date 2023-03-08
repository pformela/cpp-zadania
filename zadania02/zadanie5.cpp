#include <iostream>
#include <cstdlib>
#include <ctime>

void generate_random_nums(int &num_of_draws)
{
  int num;

  do
  {
    num = std::rand() % 100 + 1;
    num_of_draws++;
    std::cout << num << " ";
  } while (num != 100);
}

int main()
{
  std::srand(std::time(NULL));
  int num_of_draws = 0;

  generate_random_nums(num_of_draws);

  std::cout << std::endl;
  std::cout << "Wylosowano " << num_of_draws << " razy." << std::endl;

  return 0;
}