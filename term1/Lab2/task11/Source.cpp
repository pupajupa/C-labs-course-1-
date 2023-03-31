/*������ �� ��� ������� R ������ � ������������� ��������� �������� P � 
������ ����� Q?*/
#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_ALL, "Russian");
	long double const pi = 3.1415926535897932384626433832795;
	double r, p, q;
	std::cout << "������� ������ ����:\n" << "r = ";
	std::cin >> r;

	std::cout << "������� ������� �����:\n" << "p = ";
	std::cin >> p;

	std::cout << "������� ������ ���� ����� � ��������:\n" << "q = ";
	std::cin >> q;

	if (r <= 0 || p <= 0 || q <= 0 || q > 90)
	{
		std::cout << "������. ������� ���������� ��������.";
		return 0;
	}

	if (r <= p * sin(q * pi / 180) / 2)
	{
		std::cout << "������";
	}

	else
	{
		std::cout << "�� ������";
	}
	return 0;
}