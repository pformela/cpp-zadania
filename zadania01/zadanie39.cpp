#include <iostream>
#include <vector>
#include <set>

int main()
{
  std::vector<char> chars = {'x', 'P', 'Q', '4', '\n', '%', 'u', '@', 'e',
                             'T', 'B', '$', '!', ':', '"', '1', '<', 'd', 'k', 'L', '$', ')', '$', 'B', 'x',
                             'w', 'q', 'P', 'c', 'X', 'B', '>', '?', '[', 'r', 'x', '$', '#', '}', '|', 'd',
                             'l', 'n', 'b', 'V', '!'};

  int res = 0;
  std::set<char> unique_chars;

  for (int i = 0; i < chars.size(); i++)
  {
    if (chars[i] != chars.begin()[0] && chars[i] != chars.end()[-1] && std::count(chars.begin(), chars.end(), chars[i]) > 1)
    {
      unique_chars.insert(chars[i]);
    }
    if (chars[i] >= 48 && chars[i] <= 48 + 9)
    {
      res += chars[i] - '0';
    }
  }

  for (auto it = unique_chars.begin(); it != unique_chars.end(); it++)
  {
    std::cout << *it << " ";
  }

  std::cout << std::endl;
  std::cout << "Sum: " << res << std::endl;

  return 0;
}