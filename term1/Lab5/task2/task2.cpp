#include <iostream>
#include <Windows.h>
void vvod();
int main()
{
	HINSTANCE load;
	load = LoadLibrary(L"Dll1.dll");
	typedef double(*rec) (double*, int, int);
	rec recursion;
	recursion = (rec)GetProcAddress(load, "recursion");

	typedef int(*iCheck) ();
	iCheck intCheck;
	intCheck = (iCheck)GetProcAddress(load, "intCheck");

	typedef double(*dCheck) ();
	dCheck doubleCheck;
	doubleCheck = (dCheck)GetProcAddress(load, "doubleCheck");

	setlocale(LC_ALL, "Russian");
	long long q = 0;
	do {
		vvod();
		int size = 0;
		std::cout << "\n������� ����������� �������:\n";
		size = intCheck();
		double* arr = new double[size];
		for (int i = 0; i < size; i++)
		{
			std::cout << "������� " << i << "-� ������� �������\n";
			arr[i] = doubleCheck();
		}
		double* arr2 = new double[size];
		for (int i = 0; i < size; i++)
		{
			double s = sin(arr[i] / 2);
			arr2[i] = s;
		}
		double m = recursion(arr2, 0, size - 1);
		std::cout << "\n���������� ���������: " << m << "\n";
		delete arr2;
		delete arr;
		std::cout << "\n������ ����������?\n 1 - ��\t 0 - ���\n";
		while (scanf_s("%lld", &q) != 1 || q < 0 || q > 1 || getchar() != '\n')
		{
			printf("Error\n");
			rewind(stdin);
		}
		if (q == 1)
		{
			system("cls");
		}
	} while (q == 1);
	FreeLibrary(load);
	return 0;
}
inline void vvod()
{
	std::cout << "��������� ������ ����������, ������ 253505.\n" << "������� 4\n" << "������� 5\n" << "��� ��������� ����������� ������� X �� N ��������� ����� ���������� ��������� �������, ��� ������� ����������� ������� sin(Xi/2) < 0.\n";
	std::cout << "����������� ������� ��������� ������ ��� �������� ��� ������ �� ������� �������.\n";
	std::cout << "����������� ������ �����������, ����� ��������� ������ ���� �������.\n";
}