#include "pch.h"

std::string units(int);
std::string thousand(int num);

TEST(Test1) 
{
  EXPECT_EQ(units(7), "VII");
}

TEST(Test2)
{
	EXPECT_EQ(thousand(3000), "MMM");
}

std::string units(int num)
{
	std::string str;
	int value = 0;
	if (num >= 1)
	{
		value = num;
		if (value == 9)
		{
			str += "IX";
		}
		else if (value >= 5) {
			str += 'V';
			for (int i = 0; i < value - 5; i++)
			{
				str += 'I';
			}
		}
		else if (value == 4)
			str += "IV";
		else if (value >= 1)
		{
			for (int i = 0; i < value; i++)
			{
				str += 'I';
			}
		}
	}
	return str;
}

std::string thousand(int num)
{
	int value;
	std::string str;
	if (num >= 1000)
	{
		value = (num / 1000);
		for (int i = 0; i < value; i++) //O(n)
		{
			str += 'M';
		}
		num = num % 1000;
	}
	return str;
}