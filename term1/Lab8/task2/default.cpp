#include <iostream>
#include "Header.h"

void printInfo()
{
	printf("<-------------------------------------------------------------------------------------------------------------->");
	printf("\n|��������� ������ ����������, ������ 253505.                                                                   |");
	printf("\n|������� 2. ������� 4.                                                                                         |");
	printf("\n|--------------------------------------------------------------------------------------------------------------|");
	printf("\n|� �������������� ��������������� ���� �������� ���������� � ��������� ������ � ������� �������� ����������.   |");
	printf("\n|�� ��������� ������ � ��������� ����: ���� ������, ����� ����������, ����� �����������, ����� ��������� ����. |");
	printf("\n|���������� ������������� ����������� ���������� � �������������� � �������� ��������������� m ���� �� ������ N|");
	printf("\n|���� ������ � �������� ����������� ������ �� ������� t ����� ������. ������� ����� ����������� ��� ��������� �|");
	printf("\n|������������� ��������� ����� � ������ ������.                                                                |");
	printf("\n<-------------------------------------------------------------------------------------------------------------->");
}

int intCheck(int min, int max)
{
	int x;
	if (min == 1 && max == 2)
	{
		printf("������ ���������� ����? (1 - ��\t2 - ���).\n��� �����: ");
	}
	if (max == 3) {
		max = 2;
	}
	while (scanf_s("%d", &x) != 1 || x < min || x > max || getchar() != '\n')
	{
		printf("Error\n");
		rewind(stdin);
	}
	return x;
}