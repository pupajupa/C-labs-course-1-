#include "pch.h"
void vvod();
long long intCheck();
long long masCheck();
long long** masInit(long long row, long long col);
long long* result(long long** arr, long long row, long long col, long long& k);
long long getPr(long long* diag, long long k);
long long answer(long long row, long long col, long long, long long, long long, long long);
TEST(TestCase1, Test1)
{
	ASSERT_EQ(answer(2,2, 2, 8, 9, 12), 24);
}
TEST(TestCase2, Test1)
{
	ASSERT_EQ(answer(2,2,2,7,8,8), 16);
}
TEST(TestCase3, Test1)
{
	ASSERT_EQ(answer(2,2,0,0,0,0), 0);
}
long long answer(long long row, long long col, long long a1, long long a2, long long a3, long long a4)
{
	long long k = 0;
	long long** arr = masInit(row, col);
	arr[0][0] = a1;
	arr[0][1] = a2;
	arr[1][0] = a3;
	arr[1][1] = a4;
	long long* diag = result(arr, row, col, k);
	return getPr(diag, k);
}
long long** masInit(long long row, long long col)
{
	long long k = 0;
	long long** arr = new  long long* [row];
	long long* diag = new long long[row];
	for (long long i = 0; i < row; i++)
	{
		arr[i] = new long long[col];
	}
	return arr;
}

long long* result(long long** arr, long long row, long long col, long long& k)
{
	long long* diag = new long long[row];
	for (long long i = 0; i < row; i++)
	{
		for (long long j = 0; j < col; j++)
		{
			if ((i == j) && (arr[i][j] % 2 == 0) && (arr[i][j] != 0))
			{
				diag[k] = arr[i][j];
				k++;
			}
		}
	}
	return diag;
}

long long getPr(long long* diag, long long k) {
	long long pr = 1;
	for (long long i = 0; i < k; i++)
	{
		pr *= diag[i];
	}
	if (pr == 1) {
		pr = 0;
	}
	return pr;
}