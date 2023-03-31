//Лабораторная работа 3. Задание 9
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	long long a, sum = 0, res;
	int n;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "n = ";
	std::cin >> n;
	for (long long i = 1; i <= n; i++)
	{
		res = pow(2, (i - 1)) * pow(-1, (i - 1)) * a;
		sum += res;
	}
	std::cout << sum;
	return 0;
}