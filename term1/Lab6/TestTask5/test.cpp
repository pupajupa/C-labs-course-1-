#include "pch.h"

long long checkingMax(int k, long long l, int m, std::string str1, std::string str2);
long long binpow(long long x, long long y, long long m);
long long equal(int k, long long l, int m, std::string str1, std::string str2);

TEST(checkingMax, test_ordinary_1) 
{
    EXPECT_EQ(checkingMax(1, 1000000000, 10000, "cup", "russia"), 9552);
}
TEST(equal, test_ordinary_2)
{
    EXPECT_EQ(equal(1, 7, 1000, "aaa", "aaa"), 26);
}

long long checkingMax(int k, long long l,int m, std::string str1, std::string str2)
{
    long long step;
    step = binpow(26, l - str1.length() - str2.length(), m) * 2 % m;
    return step;
}

long long equal(int k, long long l, int m, std::string str1, std::string str2)
{
    long long step;
    step = (binpow(26, l - str1.length() - str2.length(), m)) % m;
    return step;
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