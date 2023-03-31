#include <iostream>
#include <stdio.h>
int intCheck()
{
	int x;
	while (scanf_s("%d", &x) != 1 || x < 1 || x > INT_MAX || getchar() != '\n')
	{
		printf("Error\n");
		rewind(stdin);
	}
	return x;
}
int povtor()
{
	int x;
	printf("Хотите продолжить?\n 1 - Да\t 0 - Нет\n");
	while (scanf_s("%d", &x) != 1 || x < 0 || x > 1 || getchar() != '\n')
	{
		printf("Error\n");
		rewind(stdin);
	}
	if (x == 1)
	{
		system("cls");
	}
	return x;
}
double* masInit(int size)
{
	double* arr = new double[size + 1];
	for (int i = 1; i <= size; i++)
	{
		double value = 0;
		if (i <= 17)
		{
			double ctg = 0;
			ctg = cos(i) / sin(i);
			value = ctg * ctg;
			arr[i] = value;
		}
		else
		{
			value = sin(i);
			arr[i] = value;
		}
		std::cout << i << "-й элемент массива: " << arr[i] << "\n";
	}
	return arr;
}
double stay(double* arr, int size)
{
	double m = 0.0;
	for (int i = 1; i <= size; i++)
	{
		m += arr[i];
	}
	return m / size;
}
double dispersion(double* arr, int size)
{
	double D = 0.0;
	for (int i = 1; i <= size; i++)
	{
		D += (arr[i] - stay(arr, size)) * (arr[i] - stay(arr, size));
	}
	return -(D/size) ;
}