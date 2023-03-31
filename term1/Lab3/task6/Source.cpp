/*������������ ������ 3. ������� 6. ������� 4
���������� ����������� ����� ������ ��������� f(x) = 0 ��� ������� ��
������ ��������. ������ ����� ����� �� ���������� ���������: ����������
�������� �� ������ �� ����� ��������� � ��������� ����� � ���� ��������
�������, ����������� �� ������. ��������, ��� ������� ��� �����������,
������� ������ ���������. ��������� ������ ��������� � ������������, ��
������� ������ ��������� ������� ������ �����, ��������� ���, � ������� �����
��������� ��������, ������ � ����� ������ ��������, ����� ������ � �������
���*/
#include <iostream>
#include <cmath>
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
    long double i = 0, k, s1 = 0, s = 0, x = 0,s2 = 0;
    double min = 0;
    double min1 = 0;
    const int MIN = 1;
    const int MAX = INT_MAX;
    bool isIncorrect;
    do
    {
        isIncorrect = false;
        std::cout << "������� �����, ������ ���������� ������, �� ������� �� ������ ��������� ������� ������ �����" << '\n';
        std::cin >> n;
        if (std::cin.fail()) {
            isIncorrect = true;
            std::cout << "������. ������� ���������� �����" << '\n';
            std::cin.clear();
            while (std::cin.get() != '\n');
        }
        if (!isIncorrect && (n < MIN || n > MAX))
        {
            isIncorrect = true;
            std::cout << "������. �������� �������� �����" << '\n';
        }
    } while (isIncorrect);
    k = 2.0 / n;
    for (double i = 0; i >= -2; i -= k)
    {
        s = exp(i) - sin(cos(i));
        if (s < min)
        {
            min = abs(s);
            s1 = i;
        }
    }
    for (double i = -2; i <= 0; i += k)
    {
        s = exp(i) - sin(cos(i));
        if (s < min1)
        {
            min1 = abs(s);
            s2 = i;
        }
    }
    if (min1 > min)
    {
        std::cout << "������ ��������� = " << s1;
    }
    else if (min > min1)
    {
        std::cout << "������ ��������� = " << s2;
    }
    else
    {
        std::cout << "������ ��������� = " << s1;
    }
    return 0;
}