#include <iostream>
#include <string>

void printInfo();
double doubleCheck();
int intCheck();
bool repeat();
std::string baseNumber(std::string, double);
std::string numberSign(std::string, double);
std::string fractional(std::string, double);
std::string atZero(std::string, double);

#define min LLONG_MIN
#define max LLONG_MAX

int main()
{
	setlocale(LC_ALL, "Russian");
	do { //O(n)
		printInfo();
		std::string str;
		double num = 0.0;
		double old_num = 0.0;
		num = doubleCheck();
		old_num = num;
		num = fabs(num);
		str = atZero(str, num);
		str = baseNumber(str, num);
		str = numberSign(str, old_num);
		str = fractional(str, old_num);
		std::cout << "  Your number in direct code:" << std::endl;
		std::cout << str;
	} while (repeat());
	return 0;
}

int intCheck()
{
	int x;
	while (scanf_s("%d", &x) != 1 || x < 0|| x > 1 || getchar() != '\n')    //O(n)
	{
		printf("Error\n");
		rewind(stdin);
	}
	return x;
}

double doubleCheck()
{
	std::cout << "  Enter number" << std::endl;
	double x;
	while (scanf_s("%lf", &x) != 1.0 || x < min || x > max || getchar() != '\n') //O(n)
	{
		printf("Error\n");
		rewind(stdin);
	}
	return x;
}

inline void printInfo()
{
	std::cout << "Антихович Максим Викторович, группа 253505" << std::endl;
	std::cout << "Задание 1" << std::endl;
	std::cout << "Вариант 4" << std::endl << std::endl;
	std::cout << "Перевести числа из естественной формы в прямой код." << std::endl;
	std::cout << "Предусмотреть ввод положительных и отрицательных чисел." << std::endl << std::endl;
}

bool repeat()
{
	std::cout << "\n   Хотите продолжить ?\n" << "1 - Да\t0 - Нет\n";
	int q = intCheck();
	if (q == 1)
	{
		system("cls");
		return true;
	}
}

std::string baseNumber(std::string str, double num)
{
	while ((long long)num) //O(n)
	{
		if ((long long)num % 2 == 1)
			str = '1' + str;
		else
			str = '0' + str;
		num = (long long)num / 2;
	}
	return str;
}

std::string numberSign(std::string str,double old_num)
{
	if (old_num >= 0)
		str = "0." + str;
	else
		str = "1." + str;
	return str;
}

std::string fractional(std::string str, double old_num)
{
	if (old_num - (long long)old_num != 0)
	{
		if (old_num < 1.0 && old_num > -1.0)
		{
			str += "0,";
		}
		else 
		{
			str += ',';
		}
		old_num = old_num - (long long)old_num;
		old_num = fabs(old_num);
		while (old_num) //O(n)
		{
			old_num = old_num * 2;
			if ((long long)old_num == 1)
			{
				str += '1';
				old_num = old_num - 1;
			}
			else
				str += '0';
		}
	}
	return str;
}

std::string atZero(std::string str, double num)
{
	if (num == 0)
	{
		str += '0';
	}
	return str;
}