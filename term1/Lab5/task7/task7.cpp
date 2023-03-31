#include <iostream>
#include <cmath>
long recurs(long, long, long);
int main()
{
    long long res, m, k, n, t, i = 0;
    do
    {
        i++;
        std::cin >> k >> n >> t;
        if (k == 0 && n == 0 && t == 0)
        {
            return 0;
        }
        m = pow(10, t);
        std::cout << "Case #" << i << ": " << recurs(k % m, n, m) << '\n';
    } while (k != 0 && n != 0 && t != 0);
    return 0;
}

long recurs(long numrec, long step, long n)
{
    if (step & 1)
    {
        return (numrec * recurs((numrec * numrec) % n, step / 2, n)) % n;
    }
    if (step == 0)
    {
        return 1;
    }
    return recurs((numrec * numrec) % n, step / 2, n);
}