#include "pch.h"

double** masInit(int row, int col);
int* iResult(double** arr, int col, int row, int& k);
int* jResult(double** arr, int col, int row, int& k);
long long answer(long long row, long long col, long long, long long, long long, long long);

TEST(TestCase1, Test1)
{
	ASSERT_EQ(answer(2, 2, 2, 0, 9, 9), 1);
}
TEST(TestCase2, Test1)
{
	ASSERT_EQ(answer(2, 2, 2, 7, 8, 8), 0);
}
TEST(TestCase3, Test1)
{
	ASSERT_EQ(answer(2, 2, 0, 0, 0, 0), 4);
}

long long answer(long long row, long long col, long long a1, long long a2, long long a3, long long a4)
{
	int k = 0;
	double** arr = masInit(row, col);
	arr[0][0] = a1;
	arr[0][1] = a2;
	arr[1][0] = a3;
	arr[1][1] = a4;
	int* ai = iResult(arr, col, row, k);
	k = 0;
	int* aj = jResult(arr, col, row, k);
	return k;
}

double** masInit(int row, int col)
{
	double** arr = new  double* [row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new double[col];
	}
	return arr;
}
int* iResult(double** arr, int col, int row, int& k)
{
	int* ai = new int[row * col];
	ai[0] = -1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == 0) {
				ai[k] = i;
				k++;
			}
		}
	}
	return ai;
}
int* jResult(double** arr, int col, int row, int& k)
{
	int* aj = new int[row * col];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == 0) {
				aj[k] = j;
				k++;
			}
		}
	}
	return aj;
}