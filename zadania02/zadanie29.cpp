#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

int generate_random_number(int min, int max)
{
  return std::rand() % (max - min) + min;
}

std::vector<std::vector<int>> generate_matrix(unsigned int nrows, unsigned int ncols)
{
  std::vector<std::vector<int>> matrix(nrows, std::vector<int>(ncols));

  for (int i = 0; i < nrows; i++)
  {
    for (int j = 0; j < ncols; j++)
    {
      matrix[i][j] = generate_random_number(-10, 10);
    }
  }

  return matrix;
}

int count_y(int a, int x, int b)
{
  return a * x + b;
}

void check_points(std::vector<std::vector<int>> &vec, int a, int b)
{
  for (int i = 0; i < vec.size(); i++)
  {
    int y = count_y(a, vec[i][0], b);

    if (y > vec[i][1])
      std::cout << "Punkt (X:" << vec[i][0] << ",Y:" << vec[i][1] << ") leży ponad prosta" << std::endl;
    else if (y < vec[i][1])
      std::cout << "Punkt (X:" << vec[i][0] << ",Y:" << vec[i][1] << ") leży pod prosta" << std::endl;
    else
      std::cout << "Punkt (X:" << vec[i][0] << ",Y:" << vec[i][1] << ") leży na prostej" << std::endl;
  }
}

void print_matrix(std::vector<std::vector<int>> &matrix)
{
  for (int i = 0; i < matrix.size(); i++)
  {
    for (int j = 0; j < matrix[0].size(); j++)
    {
      std::cout << std::right;
      std::cout.width(4);
      std::cout << matrix[i][j];
    }

    std::cout << std::endl;
  }
}

int main()
{
  std::srand(std::time(NULL));

  std::vector<std::vector<int>> matrix2 = {{0, 1}, {1, 10}, {2, 7}};

  std::vector<std::vector<int>> matrix = generate_matrix(10, 2);

  check_points(matrix2, 2, 3);

  return 0;
}