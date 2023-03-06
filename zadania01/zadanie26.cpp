#include <iostream>
#include <vector>
#include <map>

int main()
{
  std::vector<int> v{1, 2, 4, 3, 6, 8, 7, 7, 8, 3, 4, 5, 6, 7, 1, 3, 9, 1, 0, 4, 2, 3, 6, 9};

  std::vector<std::vector<int>> v_3;

  std::map<int, int> num_of_occurences;

  int first_el_index = 0;
  int longest_subseq = 1;
  int max_length_subseq = 0;
  int max_length_subseq_index = 0;

  std::cout << "Trójelementowe podciągi niemalejące: " << std::endl;

  for (int i = 0; i < v.size() - 2; i++)
  {
    if (v[i] <= v[i + 1] && v[i + 1] <= v[i + 2])
    {
      v_3.push_back({v[i], v[i + 1], v[i + 2]});
      std::cout << v_3.end()[-1][0] << " " << v_3.end()[-1][1] << " " << v_3.end()[-1][2] << std::endl;
    }
  }

  std::cout << "Najdłuższa niemalejąca sekwencja:" << std::endl;

  for (int i = 0; i < v.size() - 1; i++)
  {
    if (longest_subseq > max_length_subseq)
    {
      max_length_subseq = longest_subseq;
      max_length_subseq_index = first_el_index;
    }
    if (v[i] <= v[i + 1])
    {
      longest_subseq++;
    }
    else
    {
      longest_subseq = 1;
      first_el_index = i + 1;
    }
  }

  for (int i = max_length_subseq_index; i < max_length_subseq_index + max_length_subseq; i++)
  {
    std::cout << v[i] << " ";
  }

  std::cout << std::endl;

  std::cout << "Liczba wystąpień każdej liczby: " << std::endl;

  for (int i = 0; i < v.size(); i++)
  {
    if (num_of_occurences.find(v[i]) == num_of_occurences.end())
    {
      num_of_occurences[v[i]] = 1;
    }
    else
    {
      num_of_occurences[v[i]]++;
    }
  }

  for (auto e : num_of_occurences)
  {
    std::cout << e.first << " -> " << e.second << std::endl;
  }

  return 0;
}