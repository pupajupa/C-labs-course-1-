//Лабороторная работа 3. Задание 3
#include <iostream>
int main()
{   
	const double pi = 3.1415926535;
    double x = 0, h, y, b = pi / 2, a = 0, m = 20;
    h = (b - a) / m;
	for (int i = 0; x <= b; i++)
	{
		x = a + i * h;
		y = sin(x) - cos(x);
		std::cout << "sin(" << x << ") - cos(" << x << ") = " << y << '\n';
	}
	return 0;
}