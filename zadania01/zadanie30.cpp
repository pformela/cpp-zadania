#include <iostream>
#include <vector>

int main()
{
  std::vector<int> blob_weight = {1, 1};

  while (blob_weight.size() < 13)
  {
    blob_weight.push_back(blob_weight.end()[-1] + blob_weight.end()[-2]);
  }

  std::cout << "Waga bloba po 13 okrążeniu: " << blob_weight[12] << std::endl;

  return 0;
}