#include <iostream>
int check();
int diap();
int qcheck();
int main()
{
    int q, l = 0;
    setlocale(LC_ALL, "Russian");
    do {
        std::cout << "��������� ������ ����������\n" << "������� 4\n" << "������� 1\n";
        std::cout << "--���c�� ���������� ������������ ������ �� k �����. ����������, ����������� �� �������� ������� �� ��������-- \n";
        std::cout << "������� ���������� ��������� � �������:\n";
        int k = diap();
        int a[500];
        std::cout << "������� �������� ������� ��-������ � �������:\n";
        for (int i = 0; i < k; i++)
        {
            std::cout << "������� " << i + 1 << "-� �������\n";
            a[i] = check();
        }
        //���� 
        for (int j = 1; j < k; j++)
        {
            if (a[j] > a[j - 1] || a[j] == a[j - 1])
            {
                std::cout << "No!\n";
                break;
            }
            l++;
        }
        if (l + 1 == k)
        {
            std::cout << "Yes!\n";
        }
        
        // �������� �� �� ����� ������� 
        std::cout << "������ ����������?\n 0 - ���\t 1 - ��\n";
        q = qcheck();
        if (q == 1)
        {
            system("cls");
        }
    }while(q == 1);
    return 0;
}
int check()
{
    int n = 0;
    const int MIN = INT_MIN;
    const int MAX = INT_MAX;
    bool isIncorrect;
    do {
        isIncorrect = false;
        std::cin >> n;
        if (std::cin.fail())
        {
            std::cin.clear();
            while (std::cin.get() != '\n');
            isIncorrect = true;
            std::cout << "Mistake. Enter correct number" << '\n';
        }
        if (!isIncorrect && std::cin.get() != '\n')
        {
            std::cin.clear();
            while (std::cin.get() != '\n');
            std::cout << "ERORR" << '\n';
            isIncorrect = true;
        }
        if (!isIncorrect && (n < MIN || n > MAX))
        {
            isIncorrect = true;
            std::cout << "RANGE ERROR" << '\n';
        }
    } while (isIncorrect);
    return n;
}
int diap()
{
    int n = 0;
    const int MIN = 1;
    const int MAX = INT_MAX;
    bool isIncorrect;
    do {
        isIncorrect = false;
        std::cin >> n;
        if (std::cin.fail())
        {
            std::cin.clear();
            while (std::cin.get() != '\n');
            isIncorrect = true;
            std::cout << "Mistake. Enter correct number" << '\n';
        }
        if (!isIncorrect && std::cin.get() != '\n')
        {
            std::cin.clear();
            while (std::cin.get() != '\n');
            std::cout << "ERORR" << '\n';
            isIncorrect = true;
        }
        if (!isIncorrect && (n < MIN || n > MAX))
        {
            isIncorrect = true;
            std::cout << "RANGE ERROR" << '\n';
        }
    } while (isIncorrect);
    return n;
}
int qcheck()
{
    int k;
    const int MIN = 0;
    bool isIncorrect;
    do {
        isIncorrect = false;
        std::cin >> k;
        if (std::cin.fail())
        {
            std::cin.clear();
            while (std::cin.get() != '\n');
            isIncorrect = true;
            std::cout << "������. ������� ���������� ��������" << '\n';
        }
        if (!isIncorrect && std::cin.get() != '\n')
        {
            std::cin.clear();
            while (std::cin.get() != '\n');

            std::cout << "������. ������� ���������� ��������" << '\n';
            isIncorrect = true;
        }
        if (!isIncorrect && (k < MIN || k > 1))
        {
            isIncorrect = true;
            std::cout << "������. ������� ���������� ��������" << '\n';
        }
    } while (isIncorrect);
    return k;
}