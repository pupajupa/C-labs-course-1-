//�������� ��������� ���������� ������������� �� ���� ������������ ����� X � Y � �������������� ��������� ��������.�������� ��� �������� ���������.��������������� ���������� ����������� ���� ��� ����������� ������� � ��� ��.
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	bool isIncorrect;
	do {
		isIncorrect = false;
		std::cout << "������� x,y" << std::endl;
		std::cin >> x >> y;
		if (std::cin.fail()) {
			isIncorrect = true;
			std::cout << "������. ������� ���������� �����" << std::endl;
			std::cin.clear();
			while (std::cin.get() != '\n');
		}
	} while (isIncorrect);
	std::cout << "���������� �������� = " << (x >= y ? x : y);
	return 0;
}