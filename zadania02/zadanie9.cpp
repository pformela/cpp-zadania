#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>

void generate_random_double_vector(std::vector<double> &nums, int size, int from, int to, int precision = 3)
{
  unsigned long long d = std::pow(10, precision);
  double value;

  for (int i = 0; i < size; i++)
  {
    value = from + (to - from) * (std::rand() % d / (1.0 * d));
    nums.push_back(value);
  }
}

double calculate_mean(std::vector<double> &nums)
{
  double sum = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    sum += nums[i];
  }

  return sum / nums.size();
}

void print_vector(std::vector<double> &nums)
{
  for (int i = 0; i < nums.size(); i++)
  {
    std::cout << nums[i] << " ";
  }
  std::cout << std::endl;
}

int main()
{
  std::srand(std::time(NULL));
  std::vector<double> nums;

  generate_random_double_vector(nums, 10, -1, 1);
  print_vector(nums);

  std::cout << "Mean: " << calculate_mean(nums) << std::endl;

  return 0;
}