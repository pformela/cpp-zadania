#include <iostream>
#include <vector>

int main()
{
  std::vector<int> x = {2, 7, 1, 1, 4, 9, 3, 2, 1, 4, 1, 9, 6, 1, 3, 0, 1, 2, 3, 6, 8, 5, 6, 9,
                        3, 0, 8, 1, 8, 8, 7, 0, 7, 8, 5, 0, 2, 2, 3, 7, 1, 7, 2, 4, 7, 7, 5, 9, 0, 7, 7, 9, 2, 2, 2, 7,
                        0, 0, 5, 4, 6, 3, 9, 3, 5, 1, 0, 0, 9, 2, 9, 2, 8, 5, 0, 8, 5, 7, 0, 9, 6, 4, 9, 7, 8, 8, 6, 5,
                        4, 3, 2, 5, 8, 9, 4, 6, 8, 7, 9, 9};

  int current_distance = 0;
  int number_pos = 0;

  for (int i = 0; i < x.size(); i++)
  {
    if (x[i] == 9 && x[number_pos] == 9)
    {
      number_pos = i;
      std::cout << "Odległość: " << current_distance << std::endl;
      current_distance = 0;
    }
    else if (x[number_pos] == 9)
    {
      current_distance++;
    }
    else
    {
      number_pos = i;
    }
  }

  return 0;
}