//��� �������������� ����� � ���������� ����� "�� ����� � ������ � ����", ���������� ��������� ����� "����" � ������ �.
#include <iostream>
int main()
{
	long int K;
	setlocale(LC_ALL, "Russian");

	std::cin >> K;

	if (K == 0)
	{
		std::cout << "ERROR";
	}
	else if (K < 0)
	{
		std::cout << "ERROR";
	}
	else if ((K % 100 == 11) || (K % 100 == 12) || (K % 100 == 13) || (K % 100 == 14))
	{
		std::cout << "�� ����� " << K << " ������ � ����";
	}
	else if (K % 10 == 1)
	{
		std::cout << "�� ����� " << K << " ���� � ����";
	}
	else if ((K % 10 == 2) || (K % 10 == 3) || (K % 10 == 4))
	{
		std::cout << "�� ����� " << K << " ����� � ����";
	}
	else if ((K % 10 > 4) || (K % 10 == 0))
	{
		std::cout << "�� ����� " << K << " ������ � ����";
	}
	else
	{
		std::cout << "ERROR";
	}
	return 0;
}