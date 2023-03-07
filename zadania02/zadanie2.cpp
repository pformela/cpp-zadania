#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <numeric>

std::vector<int> generate_random_vector(int len)
{
  std::vector<int> vec;
  for (int i = 0; i < len; i++)
  {
    vec.push_back(std::rand() % 10 + 1);
  }

  return vec;
}

int find_and_delete_largest_num(std::vector<int> &vec)
{
  int largest_num = *std::max_element(vec.begin(), vec.end());
  vec.erase(std::find(vec.begin(), vec.end(), largest_num));

  return largest_num;
}

void sum(int num, std::vector<int> &vec)
{
  int sum = std::reduce(vec.begin(), vec.end());

  for (int i = 0; i < num; i++)
  {
    std::cout << sum << std::endl;
  }
}

int main()
{
  std::srand(std::time(NULL));
  std::vector<int> vec = generate_random_vector(3);

  for (int i = 0; i < vec.size(); i++)
  {
    std::cout << vec[i] << " ";
  }

  std::cout << std::endl;

  int largest_num = find_and_delete_largest_num(vec);

  for (int i = 0; i < vec.size(); i++)
  {
    std::cout << vec[i] << " ";
  }

  std::cout << std::endl;
  std::cout << "Largest num: " << largest_num << std::endl;

  sum(largest_num, vec);

  return 0;
}