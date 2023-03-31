//Лабораторная работа 3. Задание 2
#include <iostream>
#include <iomanip>
int main()
{
	const double e = 0.001;
	long double d = 0, sum = 0;
	int n = 1;
	do
	{
		d = pow((1.0 / 2), n) + pow((1.0 / 3), n);
		sum += d;
		n++;
	} while (d > e);
	std::cout << std::setprecision(10) << sum;
	return 0;
}