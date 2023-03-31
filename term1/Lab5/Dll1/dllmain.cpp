#include <stdio.h>
#include <iostream>
extern "C" __declspec(dllexport) double recursion(double* arr2, int i, int size)
{
	if (i == size)
	{
		if (arr2[i] < 0)
			return 1;
		else
			return 0;
	}
	return recursion(arr2, i, (i + size) / 2) + recursion(arr2, (i + size) / 2 + 1, size);
}
extern "C" __declspec(dllexport) double doubleCheck()
{
	double x;
	while (scanf_s("%lf", &x) != 1.0 || x < -100000000 || x > 100000000 || getchar() != '\n')
	{
		printf("Error\n");
		rewind(stdin);
	}
	return x;
}
extern "C" __declspec(dllexport) int intCheck()
{
	int x;
	while (scanf_s("%i", &x) != 1 || x < 1 || x > 2147483647 || getchar() != '\n')
	{
		printf("Error\n");
		rewind(stdin);
	}
	return x;
}