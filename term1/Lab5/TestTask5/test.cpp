#include "pch.h"
long long** masInit(long long, long long);
long long** masInput(long long**, long long, long long);
long long* masCol(long long**, long long, long long, long long&);
long long sumValue(long long*, long long);
long long answer(long long row, long long col, long long, long long, long long, long long);

TEST(TestCase1, Test1)
{
    ASSERT_EQ(answer(2, 2, 2, 0, 9, 9), 9);
}
TEST(TestCase2, Test1)
{
    ASSERT_EQ(answer(2, 2, 9, 7, 7, 8), 8);
}
TEST(TestCase3, Test1)
{
    ASSERT_EQ(answer(2, 2, 7, 0, 0, 0), 7);
}

long long answer(long long row, long long col, long long a1, long long a2, long long a3, long long a4)
{
    long long** arr = masInit(row, col);
    arr[0][0] = a1;
    arr[0][1] = a2;
    arr[1][0] = a3;
    arr[1][1] = a4;
    long long k = 0;
    long long* arr1 = masCol(arr, row, col, k);
    return sumValue(arr1, k);
}
long long** masInit(long long row, long long col)
{
    long long** arr = new long long* [row];
    for (long long i = 0; i < row; i++)
    {
        arr[i] = new long long[col];
    }
    return arr;

}

long long* masCol(long long** arr, long long row, long long col, long long& t)
{
    long long* arr1 = new long long[row * col / 2 + 1];
    for (long long i = 0; i < row; i++)
    {
        for (long long j = 0; j < col; j++)
        {
            if (j % 2 == 0 && arr[i][j] % 2 == 1)
            {
                arr1[t] = arr[i][j];
                t++;
            }
        }
    }
    return arr1;
}

long long sumValue(long long* arr, long long colValue)
{
    long long sum = 0, value = 0;
    for (long long i = 0; i < colValue; i++)
    {
        sum += arr[i];
    }
    value = sum / colValue;
    return value;
}