#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    if (t < 1 || t > 1000)
    {
        return 0;
    }
    for (int i = 1; i <= t; i++) 
    {
        unsigned long long n;
        cin >> n;
        if (n > 1000000000 || n < 1)
        {
            return 0;
        }
        if (n % 10 == 9)
        {
            cout << n / 10 + 1 << '\n';
        }
        else
        {
            cout << n / 10 << '\n';
        }
    }
    return 0;
}