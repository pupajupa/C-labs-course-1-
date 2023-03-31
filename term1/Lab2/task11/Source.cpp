/*Сможет ли шар радиуса R пройти в ромбообразное отверстие стороной P и 
острым углом Q?*/
#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");
	long double const pi = 3.1415926535897932384626433832795;
	double r, p, q;
	std::cout << "Введите радиус шара:\n" << "r = ";
	std::cin >> r;

	std::cout << "Введите сторону ромба:\n" << "p = ";
	std::cin >> p;

	std::cout << "Введите острый угол ромба в градусах:\n" << "q = ";
	std::cin >> q;

	if (r <= 0 || p <= 0 || q <= 0 || q > 90)
	{
		std::cout << "Ошибка. Введите корректные значения.";
		return 0;
	}

	if (r <= p * sin(q * pi / 180) / 2)
	{
		std::cout << "Сможет";
	}

	else
	{
		std::cout << "Не сможет";
	}
	return 0;
}