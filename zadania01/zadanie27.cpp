#include <iostream>
#include <vector>
#include <set>

int main()
{
  std::vector<int> v_1 = {1, 3, 5, 7, 9};
  std::vector<int> v_2 = {1, 4, 7, 11, 15};
  std::vector<int> v_3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 20};

  std::vector<int> v_4;

  std::cout << "Część wspólna zbiorów v_1 i v_2" << std::endl;

  for (int i = 0; i < v_1.size(); i++)
  {
    for (int j = 0; j < v_2.size(); j++)
    {
      if (v_1[i] == v_2[j] && std::count(v_4.begin(), v_4.end(), v_1[i]) == 0)
      {
        v_4.push_back(v_1[i]);
        std::cout << v_4.end()[-1] << " ";
      }
    }
  }

  std::cout << std::endl;

  std::cout << "Rożnica zbioru v3 i sumy v1+v2:" << std::endl;

  std::set<int> s;
  std::vector<int> v_5;

  copy(v_1.begin(), v_1.end(), inserter(s, s.end()));
  copy(v_2.begin(), v_2.end(), inserter(s, s.end()));

  for (int e : v_3)
  {
    if (s.find(e) == s.end())
    {
      v_5.push_back(e);
      std::cout << v_5.end()[-1] << " ";
    }
  }

  std::cout << std::endl;

  std::cout << "Suma wszystkich zbiorów: " << std::endl;

  std::set<int> s_2;

  copy(v_1.begin(), v_1.end(), inserter(s_2, s_2.end()));
  copy(v_2.begin(), v_2.end(), inserter(s_2, s_2.end()));
  copy(v_3.begin(), v_3.end(), inserter(s_2, s_2.end()));

  for (int e : s_2)
  {
    std::cout << e << " ";
  }

  std::cout << std::endl;
  return 0;
}