#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

int draw_empty_index(std::vector<int> &nums)
{
  int index;

  while (true)
  {
    index = std::rand() % nums.size();
    if (nums[index] == -1)
    {
      break;
    }
  }

  return index;
}

void generate_random_vector(std::vector<int> &nums, int size, int from, int to)
{
  int index;
  for (int i = 0; i < to - from; i++)
  {
    index = draw_empty_index(nums);
    nums[index] = std::rand() % (to - from) + from;
  }
}

int main()
{
  std::srand(std::time(NULL));
  std::vector<int> nums(20, -1);

  generate_random_vector(nums, 20, 0, 20);

  for (auto e : nums)
  {
    std::cout << e << " ";
  }

  std::cout << std::endl;

  return 0;
}