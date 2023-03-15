#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::vector<int> read_file(std::string file_name)
{
  std::ifstream myfile;
  myfile.open(file_name);

  std::vector<int> numbers;

  std::string line;

  while (myfile)
  {
    std::getline(myfile, line);
    if (line != "")
    {
      numbers.push_back(std::stoi(line));
    }
  }

  myfile.close();

  return numbers;
}

void print_vector(std::vector<int> &numbers)
{
  for (int i = 0; i < numbers.size(); i++)
  {
    std::cout << numbers[i] << " ";
  }

  std::cout << std::endl;
}

int main()
{
  std::vector<int> numbers = read_file("zadanie31.txt");

  print_vector(numbers);

  return 0;
}