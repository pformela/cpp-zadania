#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void generate_random_vector(std::vector<int> &nums, int size, int from, int to)
{
  for (int i = 0; i < size; i++)
  {
    nums[i] = std::rand() % (to - from) + from;
  }
}

void check_vector(std::vector<int> &nums)
{
  int num_od_odd = 0;
  int num_of_even = 0;
  int num_of_positive = 0;
  int num_of_negative = 0;

  for (int e : nums)
  {
    if (e > 0)
    {
      num_of_positive++;
    }
    else if (e < 0)
    {
      num_of_negative++;
    }
    if (e % 2 == 0)
    {
      num_of_even++;
    }
    else
    {
      num_od_odd++;
    }
  }

  std::cout << "Liczba liczb dodatnich: " << num_of_positive << std::endl;
  std::cout << "Liczba liczb ujemnych: " << num_of_negative << std::endl;
  std::cout << "Liczba liczb parzystych: " << num_of_even << std::endl;
  std::cout << "Liczba liczb nieparzystych: " << num_od_odd << std::endl;
}

int main()
{
  std::srand(std::time(NULL));
  std::vector<int> nums(10);

  generate_random_vector(nums, 10, -10, 10);

  for (auto e : nums)
  {
    std::cout << e << " ";
  }

  std::cout << std::endl;

  check_vector(nums);

  return 0;
}