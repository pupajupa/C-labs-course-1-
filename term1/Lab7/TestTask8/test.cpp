#include "pch.h"

std::string result(int);

TEST(TestMax)
{
    EXPECT_EQ(result(2000000000),"11233323323111312232");
}
TEST(TestMin)
{
    EXPECT_EQ(result(1), "1");
}

TEST(Test1)
{
    EXPECT_EQ(result(193193), "23133222322");
}

std::string result(int numInTen)
{
    int pos1 = 0;
    std::string threeSystem, s;
    while (numInTen >= 3)
    {
        threeSystem += (numInTen % 3) + '0';
        numInTen /= 3;
    }
    threeSystem += (numInTen)+'0';
    reverse(threeSystem.begin(), threeSystem.end());
    s = "10";
    int pos = threeSystem.find(s);
    while (pos != -1)
    {
        threeSystem.erase(pos, 2);
        threeSystem.insert(pos, "3");
        threeSystem.insert(pos, "0");
        pos = threeSystem.find(s);
    }
    s = "20";
    pos = threeSystem.find(s);
    while (pos != -1)
    {
        threeSystem.erase(pos, 2);
        threeSystem.insert(pos, "3");
        threeSystem.insert(pos, "1");
        pos = threeSystem.find(s);
    }
    s = "30";
    pos = threeSystem.find(s);
    while (pos != -1)
    {
        threeSystem.erase(pos, 2);
        threeSystem.insert(pos, "3");;
        threeSystem.insert(pos, "2");
        pos = threeSystem.find(s);
    }
    while (threeSystem[0] == '0')
    {
        threeSystem.erase(0, 1);
    }
    return threeSystem;
}