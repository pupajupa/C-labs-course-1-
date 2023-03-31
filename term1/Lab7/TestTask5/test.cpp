#include "pch.h"

int CountInt(int);

TEST(Test1)
{
    ASSERT_EQ(CountInt(880'055'535), 88'005'553);
}
TEST(TestMin)
{
    ASSERT_EQ(CountInt(1), 0);
}
TEST(TestMax)
{
    ASSERT_EQ(CountInt(1'000'000'000), 100'000'000);
}


int CountInt(int end)
{
    return  (end + 1) / 10;
}