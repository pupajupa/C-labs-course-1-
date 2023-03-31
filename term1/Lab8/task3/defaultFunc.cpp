#include <iostream>
#include <string>
#include "Header.h"

void printInfo()
{
	printf("---------------------------------------------------------------------------------");
	printf("\n|��������� ������ ����������, ������ 253505.                                    |");
	printf("\n|������� 3. ������� 23.                                                         |");
	printf("\n|-------------------------------------------------------------------------------|");
	printf("\n|��������� ���� ������ ��������� ��������� ���������� ������������.             |");
	printf("\n|�������� � ���������� ��������� ��������: ������������, ����������, ����� ����.|");
	printf("\n|��� ��������� ���� ���������� ������� ���������� ����������                    |");
	printf("\n|������� �� ������� ������������ � ������� �������� ����������.                 |");
	printf("\n---------------------------------------------------------------------------------");
}

int intCheck(int x, int min, int max)
{
	setlocale(LC_ALL, "rus");
	while (scanf_s("%d", &x) != 1 || x < min || x > max || getchar() != '\n')
	{
		printf("Error. Incorrect Input! Try again.\n");
		rewind(stdin);
	}
	return x;
}

void strCheck(char str[])
{
	std::string ans;
	while (1)
	{
		ans.clear();
		getline(std::cin, ans);
		if (ans.length() >= 60)
		{
			std::cout << "Big length. Try again\n";
		}
		else
		{
			break;
		}
	}
	for (int i = 0; i < ans.length(); i++)
	{
		str[i] = ans[i];
	}
	str[ans.length()] = '\0';
}

bool arrCheck(char a[], char b[])
{
	bool ans = true;
	for (int i = 0; i < 60; i++)
	{
		if (a[i] != b[i])
		{
			ans = false;
			break;
		}
		if (a[i] == '\0' && b[i] == '\0') {
			break;
		}
	}
	return ans;
}