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
		std::cout << "Антихович Максим Викторович, группа 253505.\n" << "Вариант 4\n" << "Задание 1\n" << "Составить программу для вычисления математического ожидания m и дисперсии D\n";
		std::cout << "Размерность массива ввести с клавиатуры.\n";
		std::cout << "Элементы массива, значения математического ожидания и дисперсии вывести на экран.\n";
		std::cout << "Введите размерность массива:\n";
		int size = intCheck();
		double* arr = masInit(size);
		std::cout << "Значение математического ожидание (m) = " << stay(arr, size) << '\n';
		std::cout << "Значение дисперсии (D) = " << dispersion(arr, size) << '\n';
		delete arr;
		q = povtor();
	} while (q == 1);
	std::cout << "\tGoodBye.";
	return 0;
}