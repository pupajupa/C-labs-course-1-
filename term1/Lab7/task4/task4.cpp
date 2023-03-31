#include <iostream>
#include <string>
std::string thousand(std::string, int&, int&);
std::string hundred(std::string, int&, int&);
std::string dozens(std::string, int&, int&);
std::string units(std::string, int&, int&);
int intCheck();

int main()
{
	std::string str;
	int value = 0;
	int num = intCheck();
	str = thousand(str, num, value);
	str = hundred(str, num, value);
	str = dozens(str, num, value);
	str = units(str, num, value);
	std::cout << str;
	return 0;
}

int intCheck()
{
	int num;
	std::cin >> num;
	if ((num > 3999) || (num < 1))
	{
		return 0;
	}
	else
	{
		return num;
	}

}

std::string thousand(std::string str, int& num, int& value)
{
	if (num >= 1000)
	{
		value = (num / 1000);
		for (int i = 0; i < value; i++)
		{
			str += 'M';
		}
		num = num % 1000;
	}
	return str;
}

std::string hundred(std::string str, int& num, int& value)
{
	if (num >= 100)
	{
		value = num / 100;
		if (value == 9)
			str += "CM";
		else if (value >= 5)
		{
			str += 'D';
			for (int i = 0; i < value - 5; i++)//O(n)
			{
				str += 'C';
			}
		}
		else if (value == 4)
			str += "CD";
		else if (value >= 1)
		{
			for (int i = 0; i < value; i++)
			{
				str += 'C';
			}
		}
		num = num % 100;
	}
	return str;
}

std::string dozens(std::string str, int& num, int& value)
{
	if (num >= 10)
	{
		value = num / 10;
		if (value == 9)
			str += "XC";
		else if (value >= 5)
		{
			str += 'L';
			for (int i = 0; i < value - 5; i++)
				str += 'X';
		}
		else if (value == 4)
			str += "XL";
		else if (value >= 1)
		{
			for (int i = 0; i < value; i++)
			{
				str += 'X';
			}
		}
		num = num % 10;
	}
	return str;
}

std::string units(std::string str, int& num, int& value)
{
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