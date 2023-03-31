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
		std::cout << "\nВведите размерность массива:\n";
		size = intCheck();
		double* arr = new double[size];
		for (int i = 0; i < size; i++)
		{
			std::cout << "Введите " << i << "-й элемент массива\n";
			arr[i] = doubleCheck();
		}
		double* arr2 = new double[size];
		for (int i = 0; i < size; i++)
		{
			double s = sin(arr[i] / 2);
			arr2[i] = s;
		}
		double m = recursion(arr2, 0, size - 1);
		std::cout << "\nКоличество элементов: " << m << "\n";
		delete arr2;
		delete arr;
		std::cout << "\nХотите продолжить?\n 1 - Да\t 0 - Нет\n";
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
	std::cout << "Антихович Максим Викторович, группа 253505.\n" << "Вариант 4\n" << "Задание 5\n" << "Для заданного одномерного массива X из N элементов найти количество элементов массива, для которых выполняется условие sin(Xi/2) < 0.\n";
	std::cout << "Рекурсивную функцию применять каждый раз отдельно для каждой из половин массива.\n";
	std::cout << "Рекурсивные вызовы заканчивать, когда останется только один элемент.\n";
}