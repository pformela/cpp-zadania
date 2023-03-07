#include <iostream>
#include <string>
#include <vector>

void print_name(std::string name)
{
  std::string samogloski = "aeiouyAEIOUY";

  for (int i = 0; i < name.size(); i++)
  {
    if (samogloski.find(name[i]) != std::string::npos)
    {
      std::cout << name << std::endl;
    }
  }
}

int main()
{
  print_name("Patryk");

  return 0;
}