#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

void generate_random_vector(std::vector<int> &nums, int size, int from, int to)
{
  for (int i = 0; i < size; i++)
  {
    nums[i] = std::rand() % (to - from) + from;
  }
}

std::vector<int> find_max_elements(std::vector<int> nums, int num_of_elements)
{
  std::vector<int> sorted_nums = nums;
  std::vector<int> max_elements;

  std::sort(sorted_nums.begin(), sorted_nums.end());
  max_elements = std::vector<int>(sorted_nums.end() - num_of_elements, sorted_nums.end());

  return max_elements;
}

void print_vector(std::vector<int> &nums)
{
  for (auto e : nums)
  {
    std::cout << e << " ";
  }
  std::cout << std::endl;
}

int main()
{
  std::srand(std::time(NULL));
  std::vector<int> nums(20);

  generate_random_vector(nums, 20, 0, 1000);
  print_vector(nums);

  std::vector<int> max_elements = find_max_elements(nums, 3);
  print_vector(max_elements);

  return 0;
}