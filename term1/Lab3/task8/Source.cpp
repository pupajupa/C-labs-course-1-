//Лабораторная работа 3. Задание 8
#include <iostream>
#include <cmath>
int main() 
{
	setlocale(LC_ALL, "Russian");
	int k;
	int n = 0, number;
	double s;
	bool isIncorrect;
	do
	{
		isIncorrect = false;
		std::cout << "Введите число" << '\n';
		std::cin >> k;
		if (std::cin.fail()) {
			isIncorrect = true;
			std::cout << "Ошибка. Введите корректное число" << '\n';
			std::cin.clear();
			while (std::cin.get() != '\n');
		}
		if (!isIncorrect && (k > 100000000))
		{
			isIncorrect = true;
			std::cout << "Ошибка. Неверный диапазон числа" << '\n';
		}
	} while (isIncorrect);

	for (int i = 1; i < k; i++)
	{
		number = i;
		n = i;
		s = 0;
		int num = 1;
		while ((n /= 10) != 0)
		{
			num++;
		}
		for (int j = 1; j <= num; j++)
		{
			s += pow((number % 10), num);
			number /= 10;
		}
		if (s == i)
		{
			std::cout << s << '\n';
			continue;
		}
	}
	return 0;
}