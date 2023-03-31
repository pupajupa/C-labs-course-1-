#include <iostream>
void printInfo();
bool is_divider(int, int);
void result(int, int);
bool repeat();
int intCheck(int, int);
#define INT_MAX 2147483647
#define INT_MIN -214748364-1
int main()
{
	setlocale(LC_ALL, "Russian");
	do {
		printInfo();
		std::cout << "  Введите число:" << std::endl;
		int num = intCheck(INT_MIN, INT_MAX);
		result(num, 3);
		result(num, 61);
		result(num, 131);
	} while (repeat());
	return 0;
}

bool is_divider(int a, int b)
{
	b = abs(b);
	for (int i = a; i <= b; i += a)
	{
		if (i == b)
		{
			return true;
		}
	}
	return false;
}

void result(int num, int c)
{
	std::cout << "Число " << c;
	if (!is_divider(c, num))
	{
		std::cout << " не";
	}
	std::cout << " делиться на " << num << '\n';
}

inline void printInfo()
{
	std::cout << "Антихович Максим Викторович, группа 253505" << std::endl;
	std::cout << "Задание 6" << std::endl;
	std::cout << "Вариант 4" << std::endl << std::endl;
	std::cout << "Необходимо разработать программу, которая проверяет, делится ли введенное пользователем число на заданное простое." << std::endl;
	std::cout << "Программа не должна содержать операций умножения, деления, вычитания(в том числе взятия остатка от деления)." << std::endl;
	std::cout << "Для каждого варианта нужно проверить делимость на 3 простых числа: " << 3 << " " << 61 << " " << 131 << std::endl << std::endl;
}

int intCheck(int min, int max)
{
	int k;
	bool isIncorrect;
	do {
		isIncorrect = false;
		std::cin >> k;
		if (std::cin.fail())
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			isIncorrect = true;
			std::cout << "Ошибка. Введите корректное значение" << '\n';
		}
		if (!isIncorrect && std::cin.get() != '\n')
		{
			std::cin.clear();
			while (std::cin.get() != '\n');

			std::cout << "Ошибка. Введите корректное значение" << '\n';
			isIncorrect = true;
		}
		if (!isIncorrect && (k < min || k > max))
		{
			isIncorrect = true;
			std::cout << "Ошибка. Введите корректное значение" << '\n';
		}
	} while (isIncorrect);
	return k;
}

bool repeat()
{
	std::cout << "\n   Хотите продолжить ?\n" << "1 - Да\t0 - Нет\n";
	int q = intCheck(0, 1);
	if (q == 1)
	{
		system("cls");
		return true;
	}
}

