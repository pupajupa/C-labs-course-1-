/*��������� ����� ������ ����� �� ���������� �� 1 �� �����, ���������� 
�������������:
4.2 ��� ������������� �����.*/
#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");
    long long n, s = 0;
    const int MIN = 1;
    std::cout << "������� n" << '\n';
    std::cin >> n;
    if (n < MIN)
    {
        std::cout << "������. �������� �������� �����";
    }
    else 
    {
        if (n >= 0)
        {
            int d = n / 2;
            s = (2 + n) / 2 * d;
            std::cout << s;
        }
    }
    return 0;
}