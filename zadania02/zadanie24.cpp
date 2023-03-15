#include <iostream>
#include <cmath>

long long int round_double(double x)
{
	double whole, fractional;

	fractional = modf(x, &whole);

	if (x < 0)
	{
		if (fractional <= -0.5)
			return whole - 1;
		else
			return whole;
	}
	else
	{
		if (fractional >= 0.5)
			return whole + 1;
		else
			return whole;
	}
}

int main()
{
	std::cout << round_double(2.3) << std::endl;
	std::cout << round_double(2.5) << std::endl;
	std::cout << round_double(2.7) << std::endl;
	std::cout << round_double(-2.3) << std::endl;
	std::cout << round_double(-2.5) << std::endl;
	std::cout << round_double(-2.7) << std::endl;

	return 0;
}