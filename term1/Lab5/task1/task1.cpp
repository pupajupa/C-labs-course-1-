#include <iostream>
int intCheck();
int povtor();
double* masInit(int size);
double stay(double* arr, int size);
double dispersion(double* arr, int size);
int main()
{
	setlocale(LC_ALL, "Russian");
	int q;
	do {
		std::cout << "��������� ������ ����������, ������ 253505.\n" << "������� 4\n" << "������� 1\n" << "��������� ��������� ��� ���������� ��������������� �������� m � ��������� D\n";
		std::cout << "����������� ������� ������ � ����������.\n";
		std::cout << "�������� �������, �������� ��������������� �������� � ��������� ������� �� �����.\n";
		std::cout << "������� ����������� �������:\n";
		int size = intCheck();
		double* arr = masInit(size);
		std::cout << "�������� ��������������� �������� (m) = " << stay(arr, size) << '\n';
		std::cout << "�������� ��������� (D) = " << dispersion(arr, size) << '\n';
		delete arr;
		q = povtor();
	} while (q == 1);
	std::cout << "\tGoodBye.";
	return 0;
}