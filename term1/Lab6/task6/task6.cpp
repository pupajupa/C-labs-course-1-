#include <iostream>
#include <string>
#include <set>

long long factorial(int);

int main() {
	std::string s;
	getline(std::cin,s);
	if (s.length() > 14)
	{
		std::cout << "ERROR";
		return 0;
	}
	std::set<char> various; //��������� ��������������� ��������������� ��������� ���� char
	long long result = factorial(s.length()); //���������� ���� ������������
	for (int i = 0; i < s.length(); i++) 
	{
		if (s[i]== ' ')
		{
			std::cout << "Error";
			return 0;
		}
		else if (!various.count(s[i])) //������������� �����(������� ��� � various)
		{
			int value = factorial(count(begin(s), end(s), s[i])); //���������� ����������� � �������������� �������
			result /= value;//���������� ��������� ������������
			various.insert(s[i]); //���������� ���� ����� � (various)
		}
	}
	std::cout << result;
}
long long factorial(int n) {
	long long res = 1;
	for (int i = 2; i <= n; i++) {
		res *= i;
	}
	return res;
}
