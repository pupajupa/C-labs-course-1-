/*��������� ����� ������ ����� �� ���������� �� 1 �� �����, ���������� 
�������������:
4.1 � �������������� �����*/
#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");
	long long n, s = 0;
    const int MIN = 1;
    bool isIncorrect;
    do {
        isIncorrect = false;
        std::cout << "������� n" << '\n';
        std::cin >> n;
        if (std::cin.fail()) {
            isIncorrect = true;
            std::cout << "������. ������� ���������� �����" << '\n';
            std::cin.clear();
            while (std::cin.get() != '\n');
        }
        if (!isIncorrect && n < MIN)
        {
            isIncorrect = true;
            std::cout << "������. �������� �������� �����" << '\n';
        }
    } while (isIncorrect);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s += i;
        }
    }
    std::cout << s;
    return 0;
}
