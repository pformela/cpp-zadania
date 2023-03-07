#include <iostream>
#include <vector>

int main()
{
  std::vector<int> ciag = {1, 2, 3, 2, 5, 6, 9, 1, 3, 7, 5, 8, 0, 9, 3, 1, 2, 5, 7, 6, 3, 4, 2, 1, 0, 8, 9, 7, 8, 4, 6, 3, 2, 5, 4, 7, 8, 9, 1, 3, 2, 5,
                           4, 7, 5, 6, 8, 0, 1, 2, 3, 6, 5, 8, 7, 1, 1, 2, 3, 4, 4, 5, 5, 6, 8, 9, 0, 9, 8, 1, 9, 7, 5, 4, 1, 2, 7, 6, 9, 3, 4, 2, 6};

  std::vector<std::vector<int>> subsequences;
  std::vector<std::vector<int>> subsequences_indices;

  std::vector<int> curr_subsequence;
  std::vector<int> curr_subsequence_indices;
  int current_sum = 0;

  for (int i = 0; i < ciag.size(); i++)
  {
    current_sum = 0;
    for (int j = i; j < ciag.size(); j++)
    {
      curr_subsequence.push_back(ciag[j]);
      curr_subsequence_indices.push_back(j);
      current_sum += ciag[j];
      if (current_sum == 10)
      {
        subsequences.push_back(curr_subsequence);
        subsequences_indices.push_back(curr_subsequence_indices);
        curr_subsequence.clear();
        curr_subsequence_indices.clear();
        break;
      }
      else if (current_sum > 10)
      {
        curr_subsequence.clear();
        curr_subsequence_indices.clear();
        break;
      }
    }
  }

  for (int i = 0; i < subsequences.size(); i++)
  {
    for (int j = 0; j < subsequences_indices[i].size(); j++)
    {
      std::cout << subsequences_indices[i][j] << " ";
    }
    std::cout << "-> ";
    for (int j = 0; j < subsequences[i].size(); j++)
    {
      std::cout << subsequences[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}