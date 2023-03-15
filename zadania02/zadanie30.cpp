#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int generate_number(int min, int max)
{
  return std::rand() % (max - min) + min;
}

void draft(int min, int max)
{
  int sum = 0;
  std::vector<int> nums;
  int num;

  do
  {
    num = generate_number(min, max);
    if (nums.size() == 0 || nums.end()[-1] <= num)
    {
      std::cout << "Wylosowano: " << num << std::endl;
      nums.push_back(num);
    }

    if (nums.size() >= 3)
    {
      sum = nums[nums.size() - 1] + nums[nums.size() - 2] + nums[nums.size() - 3];
      std::cout << "Suma: " << sum << std::endl;
    }
  } while (sum < 80 || sum > 90);

  std::cout << "Suma: " << sum << std::endl;
  std::cout << "Liczba wylosowanych liczb: " << nums.size() << std::endl;
}

int main()
{
  std::srand(std::time(NULL));

  draft(1, 100);

  return 0;
}