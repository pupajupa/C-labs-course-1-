//������ ��� ����� ����� X � Y. ����������, ����� ��, ��� ���� �� ��� ������� �� ������ ��� �������, ��� ���.

� ������ �������� "YES", ���� �������, "NO", ���� �� �������.

� ��������� ������� �������� "ERROR".
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