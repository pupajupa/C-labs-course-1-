//Написать программу нахождения максимального из двух вещественных чисел X и Y с использованием тернарной операции.Написать два варианта программы.Сиспользованием переменной логического типа для определения условия и без неё.
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	double x, y;
	bool isIncorrect;
	do {
		isIncorrect = false;
		std::cout << "Введите x,y" << std::endl;
		std::cin >> x >> y;
		if (std::cin.fail()) {
			isIncorrect = true;
			std::cout << "Ошибка. Введите корректное число" << std::endl;
			std::cin.clear();
			while (std::cin.get() != '\n');
		}
	} while (isIncorrect);
	std::cout << "Наибольшее значение = " << (x >= y ? x : y);
	return 0;
}