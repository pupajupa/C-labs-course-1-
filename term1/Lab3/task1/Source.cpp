//Лабораторная работа 3. Задание 1
#include <iostream>
int main()
{
	long long a, b, n = 0;
	long i = 1;
	while (i <= 30)
	{
		if (i % 2 == 0)
		{
			a = i / 2;
			b = i * i * i;
		}
		else
		{
			a = i;
			b = i * i;
		}
		n += (a - b) * (a - b);
		i++;
	}
	std::cout << n;
	return 0;
}