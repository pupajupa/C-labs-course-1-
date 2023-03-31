#include <iostream>
int GetNumber(long long interval_begin, long long interval_end);
inline long long sum(long long n);
int main() {
    long long k = GetNumber(1, 1000000000);
    long long* arr = new long long[k];

    for (long long i = 0; i < k; i++)
    {
        long long n = GetNumber(1, 10000000000);
        if (n == 0)
        {
            return 0;
        }
        arr[i] = n;
        arr[i] = sum(n);
    }
    for (long long j = 0; j < k; j++)
    {
        std::cout << arr[j];
        if (j != k - 1)
        {
            std::cout << '\n';
        }
    }
    delete[] arr;
    return 0;
}
inline long long sum(long long n)
{

    long long a = (n + 1) / 2;
    if (n == 0) {
        return 0;
    }
    return a * a + sum(n / 2);
}
int GetNumber(long long interval_begin = 1, long long interval_end = 1000000000)
{
    long long k;

    while (1)
    {
        std::cin >> k;

        if (k < interval_begin || k > interval_end)
        {
            return 0;
        }
        else
        {
            return k;
        }
    }
}