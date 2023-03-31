#include "pch.h"

bool check(std::string, long long);
std::string DoubleBin(std::string*, std::string*, long long, long long, long long, long long, long long&);
std::string result(int binaryNum);

TEST(Test1, testMax) {
  ASSERT_EQ(result(10000), "11001000000011100110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
}

TEST(Test2, testMin) {
    ASSERT_EQ(result(1), "1");
}

TEST(Test3, testDefault) {
    ASSERT_EQ(result(10), "1100");
}



std::string result (int binarNum)
{
    long long another = 0;
    std::string* firstNum = new std::string[1];
    firstNum[0] = "0";
    std::string* secNum = new std::string[1];
    secNum[0] = "";
    std::string s = DoubleBin(firstNum, secNum, 1, 1, 1, binarNum, another);
    return s;
}

std::string DoubleBin(std::string* one, std::string* sec, long long a, long long b, long long count, long long binarNum, long long& another)
{
    std::string* str1 = new std::string[1000];
    std::string* str2 = new std::string[1000];
    long long numa = 0, numb = 0;
    for (int i = 0; i < a; i++)
    {
        long long lOne = one[i].length();
        if (check(one[i], count))
        {
            str1[numa] = one[i];
            numa++;
            if (one[i] == "0" && count == 1)
            {
                str2[numb] = '1';

            }
            if (count > lOne)
            {
                one[i].insert(0, count - lOne - 1, '0');
            }
            if (!(one[i] == "0" && count == 1))
            {
                str2[numb] = '1' + one[i];
            }
            another++;
            numb++;
            if (another == binarNum)
            {
                return str2[numb - 1];
            }
        }
    }
    for (int i = 0; i < b; i++)
    {
        if (count == 1)
        {
            break;
        }
        long long lSec = sec[i].length();
        if (check(sec[i], count))
        {
            str1[numa] = sec[i];
            numa++;
            if (sec[i] == "0" && count == 1)
            {
                str2[numb] = '1';
            }
            else if (!(sec[i] == "0" && count == 1))
            {
                str2[numb] = '1' + sec[i];

            }
            numb++;
            another++;
            if (another == binarNum)
            {
                return str2[numb - 1];
            }
        }
    }
    return DoubleBin(str1, str2, numa, numb, count + 1, binarNum, another);
}

bool check(std::string one, long long count)
{
    long long reverse = 0;
    std::string sec;
    long long lenOne = one.length();
    while (lenOne > 0)
    {
        sec = (char)(((one[lenOne - 1] - 48) % 2) + 48) + sec;
        reverse++;
        for (long long i = 0; i < lenOne - 1; i++)
        {
            one[i + 1] = one[i + 1] + ((one[i] - 48) % 2) * 10;
            one[i] = (one[i] - 48) / 2 + 48;
        }
        one[lenOne - 1] = ((one[lenOne - 1] - 48) / 2) + 48;
        while (one[0] == 48)
        {
            one.erase(0, 1);
        }
        lenOne = one.length();
        if (reverse == count)
        {
            return (sec[0] == 48);
        }
    }
    return true;
}