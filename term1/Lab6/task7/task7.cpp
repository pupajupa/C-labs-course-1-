#include <iostream>
#include <string>

bool check(std::string s);

int main()
{
    std::string s, sub;
    getline(std::cin, s);
    int value = s.length();
    if (value < 1 || value > 100000)
    {
        return 0;
    }
    for (int i = 0; i < value / 2; ++i)
    {
        if (s[i] != s[value - i - 1])
        {
            std::cout << value;
            return 0;
        }
    }
    for (int i = 0; i < value - 1; i++)
    {
        sub = s.substr(i, value - i);
        if (!check(sub))
        {
            std::cout << value - i;
            return 0;
        }
    }
    std::cout << -1;
    return 0;
}

bool check(std::string s)
{
    if (s[0] == s[s.length() - 1])
    {
        return true;
    }
    else
    {
        return false;
    }
}