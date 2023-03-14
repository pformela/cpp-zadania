#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int generate_random_size()
{
  int from = 10;
  int to = 100;
  return std::rand() % (to - from + 1) + from;
}

std::vector<int> generate_vector()
{
  std::vector<int> res;

  int size = generate_random_size();

  for (int i = 0; i < size; i++)
  {
    res.push_back(std::rand() % 1001);
  }

  return res;
}

void replace_even_with_zeros(std::vector<int> &vec)
{
  for (int i = 0; i < vec.size(); i++)
  {
    if (vec[i] % 2 == 0)
    {
      vec[i] = 0;
    }
  }
}

void replace_odd_with_negatives(std::vector<int> &vec)
{
  for (int i = 0; i < vec.size(); i++)
  {
    if (vec[i] % 2 == 1)
    {
      vec[i] = -vec[i];
    }
  }
}

void print_vector_from_back(std::vector<int> &vec)
{
  for (int i = vec.size() - 1; i >= 0; i--)
  {
    std::cout << vec[i] << " ";
  }

  std::cout << std::endl;
}

int main()
{
  std::srand(std::time(NULL));

  std::vector<int> vec = generate_vector();
  replace_even_with_zeros(vec);
  replace_odd_with_negatives(vec);
  print_vector_from_back(vec);

  return 0;
}