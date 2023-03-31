#include <iostream>
#include <string>

using namespace std;

void solve(string, string, int, int, bool&, int);

int main() {
	bool res = false; 
	int q;
	string s, t;
	std::cin >> q;
	if (q < 1 || q>500)
	{
		return 0;
	}
	for (int k = 1; k <= q; k++) 
	{
		std::cin >> s;
		if (s.length() < 1 || s.length() > 500)
		{
			return 0;
		}
		std::cin >> t;
		if (t.length() < 1 || t.length() > 500)
		{
			return 0;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == t[0])
			{
				solve(s, t, i, 1, res, 1);
				if (res) 
				{ 
					cout << "YES" << '\n';
					break;
				}
			}
		}
		if (!res)
		{ 
			cout << "NO\n";
		}
		res = false;
	}
	return 0;
}

void solve(string s, string t, int i, int j, bool& res, int f)
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