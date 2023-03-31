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
		std::cout << "  ������� �����:" << std::endl;
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
	std::cout << "����� " << c;
	if (!is_divider(c, num))
	{
		std::cout << " ��";
	}
	std::cout << " �������� �� " << num << '\n';
}

inline void printInfo()
{
	std::cout << "��������� ������ ����������, ������ 253505" << std::endl;
	std::cout << "������� 6" << std::endl;
	std::cout << "������� 4" << std::endl << std::endl;
	std::cout << "���������� ����������� ���������, ������� ���������, ������� �� ��������� ������������� ����� �� �������� �������." << std::endl;
	std::cout << "��������� �� ������ ��������� �������� ���������, �������, ���������(� ��� ����� ������ ������� �� �������)." << std::endl;
	std::cout << "��� ������� �������� ����� ��������� ��������� �� 3 ������� �����: " << 3 << " " << 61 << " " << 131 << std::endl << std::endl;
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
			std::cout << "������. ������� ���������� ��������" << '\n';
		}
		if (!isIncorrect && std::cin.get() != '\n')
		{
			std::cin.clear();
			while (std::cin.get() != '\n');

			std::cout << "������. ������� ���������� ��������" << '\n';
			isIncorrect = true;
		}
		if (!isIncorrect && (k < min || k > max))
		{
			isIncorrect = true;
			std::cout << "������. ������� ���������� ��������" << '\n';
		}
	} while (isIncorrect);
	return k;
}

bool repeat()
{
	std::cout << "\n   ������ ���������� ?\n" << "1 - ��\t0 - ���\n";
	int q = intCheck(0, 1);
	if (q == 1)
	{
		system("cls");
		return true;
	}
}

