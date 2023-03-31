#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	bool x_max = true;
	std::cin >> x >> y;
	x_max = (x > y ? true : false);
	std::cout << "Наибольшее значение = " << (x_max ? x : y);
	return 0;

}