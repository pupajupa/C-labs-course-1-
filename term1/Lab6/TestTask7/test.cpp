#include "pch.h"

int palindrom(std::string s);
int nePalindrom(std::string s);
bool check(std::string s);

TEST(palindrom, test1) 
{
	ASSERT_EQ(palindrom("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"), 201);
}

TEST(nePalindrom, test2)
{
    ASSERT_EQ(nePalindrom("s"), -1);
}

int palindrom(std::string s)
{
	int value = s.length();   
    for (int i = 0; i < value / 2; ++i)
    {
        if (s[i] != s[value - i - 1])
        {
            return value;
        }
    }
}

int nePalindrom(std::string s)
{
    std::string sub;
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
    return -1;
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
