#include <iostream>
long sum(long p, long q);
long res(long k);
int main()
{
    long p = 0, q = 0;
    do
    {
        std::cin >> p >> q;
        if ((p < 0 || q < 0) || p > q)
        {
            break;
        }
        std::cout << sum(p, q) << '\n';
    } while (p >= 0 && q >= 0);
    return 0;
}
long res(long k)
{
    if (k == 0)
    {
        return 0;
    }

    else if (k % 10 > 0)
    {
        return k % 10;
    }

    else
    {
        return res(k / 10);
    }
}
long sum(long p, long q)
{
    long s = 0;
    for (long i = p; i <= q; i++)
    {
        s += res(i);
    }
    return s;
}