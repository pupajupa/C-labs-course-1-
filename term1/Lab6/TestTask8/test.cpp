#include "pch.h"
std::string result(std::string, std::string);
void solve(std::string, std::string, int, int, bool&, int);

TEST(difCheck, test1)
{
  ASSERT_EQ(result("abcdef","cdedcba"),"YES");
}

TEST(difCheck, test2)
{
	ASSERT_EQ(result("aab", "baaa"), "NO");
}

TEST(difCheck, test3)
{
	ASSERT_EQ(result("abcdef", "abcdef"), "YES");
}
std::string result(std::string s, std::string t)
{
	bool res = false;
	std::string str1, str2;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == t[0])
		{
			solve(s, t, i, 1, res, 1);
			if (res)
			{
				str2 = "YES";
				return str2;
			}
		}
	}
	if (!res)
	{
		str1 = "NO";
		return str1;
	}
	res = false;
}

void solve(std::string s, std::string t, int i, int j, bool& res, int f)
{
	if (j >= t.size())
	{
		res = true;
		return;
	}
	if (i < s.size() - 1 && s[i + 1] == t[j] && f)
	{
		solve(s, t, i + 1, j + 1, res, f);
	}
	if (i > 0 && s[i - 1] == t[j])
	{
		solve(s, t, i - 1, j + 1, res, 0);
	}
}