#include <iostream>
#include <string>
#include <cmath>
int GetNumber(int interval_begin, int interval_end);
long long binpow(long long x, long long y, long long m);
int main()
{
    std::string s, str1, str2;
    long long l;
    int m;
    long long k = GetNumber(1, 100);
    for (int i = 0; i < k; i++)
    {
        std::cin >> l;
        if (l < 1 || l>1000000000)
        {
            return 0;
        }
        std::cin >> m;
        if (m < 1 || m > 10000)
        {
            return 0;
        }
        std::cin >> str1 >> str2;
        if ((str1.length() || str2.length()) > 200 || (str1.length() || str2.length()) < 1)
        {
            return 0;
        }
        long long find = 0;
        bool isFind = false;
        long long t = 0;
        long long step;
        int n = str2.length();//6
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < str1.length(); i++) 
            {

                std::string podstr1, podstr2;
                podstr1 = str1.substr(i, str1.length());
                podstr2 = str2.substr(0, n);
                if (str1.substr(i, str1.length()) == (str2.substr(0, n)))
                {
                    isFind = true;
                    find = n;
                }
                n--;
            }//aaaaa 5
            if (j != 0) {
                std::string buf = str1;
                str1 = str2;
                str2 = buf;
            }
        }
        if (isFind && (str1.length() + str2.length() > l))
        {
            step = binpow(26, l - str1.length() - str2.length() + find, m);
            //step = pow(26, l - str1.length() - str2.length() + find);
            t = step;
        }
        else
        {
            if (l < str1.length() + str2.length())
            {
                step = 0;
            }
            else if (isFind)
            {
                if (str1 == str2) {
                    step = (binpow(26, l - str1.length() - str2.length(), m)) % m;
                }
                else {
                    step = (binpow(26, l - str1.length() - str2.length(), m) * 2) % m;
                    //step =  pow(26, l - str1.length() - str2.length()) * 2 + t;
                }

            }
            else {
                step = binpow(26, l - str1.length() - str2.length(), m) * 2 % m;
                //step = pow(26, l - str1.length() - str2.length()) * 2;
            }
        }
        std::cout << step << std::endl;
    }
	return 0;
}

int GetNumber(int interval_begin, int interval_end)
{
    int k;

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

long long binpow(long long x, long long y, long long m)
{
    if (y == 0)
    {
        return 1;
    }
    long long b = binpow(x, y / 2, m);
    if (y & 1)
    {
        return (x * b * b) % m;
    }
    else
    {
        return (b * b) % m;
    }
}