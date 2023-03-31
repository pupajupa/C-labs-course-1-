#include <iostream> 
#include <ctime>
int qcheck();
int main()
{
    int q;
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    do {
        std::cout << "��������� ������ ����������\n" << "������� 4\n" << "������� 2\n";
        std::cout << "--���������������� ��� ���������� ����������� ������ ����� ����� �������� N*M. \n���������� ������������ ������������� ���������, ������������� ���� ������� ��������� �������-- \n";
        const int SIZE = 5;
        int mass[SIZE][SIZE]{ {} };
        int pr = 1;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                mass[i][j] = rand() % 20 - 10;
                std::cout << mass[i][j] << " ";
            }
            std::cout << "\n";
        }
        int count = 0;
        for (int i = 0; i < SIZE; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                if (mass[i][j] > 0)
                {
                    pr *= mass[i][j];
                }
            }
        }
        std::cout << "������������: " << pr << "\n";
        std::cout << "������ ����������?\n 0 - ���\t 1 - ��\n";
        q = qcheck();
        if (q == 1)
        {
            system("cls");
        }
    } while (q == 1);
    return 0;
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