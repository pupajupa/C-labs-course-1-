#include "pch.h"

long long factorial(int);
long long maxCheck(std::string);
long long minCheck(std::string s);

TEST(maxCheck, test1) 
{
	ASSERT_EQ(maxCheck("qwertyuiopasdf"), 87178291200);
}

TEST(minCheck, test1)
{
	ASSERT_EQ(minCheck("aaaaaaaaaaaaaa"), 68);
}

TEST(minCheck, test2)
{
	ASSERT_EQ(minCheck("aaaaaaaaaa"), 1);
}

long long maxCheck(std::string s)
{
	long long result = factorial(s.length());
	return result;
}

long long minCheck(std::string s)
{
	std::set<char> various; //множество отсортированных неповторяющихся элементов типа char
	long long result = factorial(s.length());
	for (int i = 0; i < s.length(); i++)
	{
		if (!various.count(s[i])) //повторяющаяся буква(которой нет в various)
		{
			int value = factorial(count(begin(s), end(s), s[i])); //количество подстоновок с повторяющимися буквами
			result /= value;//количество возможных перестановок
			various.insert(s[i]); //добавление этой буквы в (various)
		}
	}
	return result;
}

long long factorial(int n) 
{
	long long res = 1;
	for (int i = 2; i <= n; i++)
	{
		res *= i;
	}
	return res;
}