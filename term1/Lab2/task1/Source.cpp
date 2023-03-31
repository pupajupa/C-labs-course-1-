//«аданы два целых числа X и Y. ќпределите, верно ли, что одно из них делитс€ на другое без остатка, или нет.

¬ ответе выведите "YES", если дел€тс€, "NO", если не дел€тс€.

¬ противных случа€х выведите "ERROR".
#include <iostream>
int main()
{
	int a, b;
	std::cin >> a >> b;
	if (a == 0 && b == 0)
	{
		std::cout << "ERROR";
	}
	else if (a == 0 || b == 0)
	{
		std::cout << "YES";
	}
	else if ((a % b == 0) || (b % a == 0))
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return 0;
}