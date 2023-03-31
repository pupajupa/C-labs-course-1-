#include <iostream>

int intCheck(int min, int max);
void vvod();
void inputs(char text, char mas[], int& j);
char* result(int number, int valueA, int valueB, char masA[], char masB[]);
bool repeat();

int main()
{
    setlocale(LC_ALL, "Russian");
    int q = 0;
    do {
        vvod();
        char text = 0, podstroka = 0, text2[2048], podstroka2[2048];
        int j = 0, p = 0;
        std::cout << "   ������� �������� ������ :\n";
        inputs(text, text2, j);
        std::cout << "   ������� ����� ��� ���������� ���������: " << '\n';
        int k = intCheck(1, j);
        std::cout << "   ������� ��������� : \n";
        inputs(podstroka, podstroka2, p);
        std::cout << "   ���������:\n" << result(k, j, p, text2, podstroka2) << '\n';
    } while (repeat());
    return 0;
}

int intCheck(int min, int max)
{
    int n;
    bool isIncorrect;
    do {
        isIncorrect = false;
        std::cin >> n;
        if (std::cin.fail())
        {
            std::cin.clear();
            while (std::cin.get() != '\n');
            isIncorrect = true;
            std::cout << "TYPR ERROR" << '\n';
        }
        if (!isIncorrect && std::cin.get() != '\n')
        {
            std::cin.clear();
            while (std::cin.get() != '\n');

            std::cout << "Error" << '\n';
            isIncorrect = true;
        }
        if (!isIncorrect && (n < min || n > max))
        {
            isIncorrect = true;
            std::cout << "RANGE ERROR" << '\n';
        }
    } while (isIncorrect);
    return n;
}

void inputs(char text, char mas[], int& j)
{
    while ((text = getchar()) != '\n')
    {
        if (j < 2047)
        {
            mas[j] = text;
            j++;
        }
        else
        {
            mas[j] = '\0';
        }
        mas[j] = '\0';
    }
}
//number = k, valueA = j, valueB = p , masA = text2, masB = podstroka2
char* result(int number, int valueA, int valueB, char masA[], char masB[])
{
    char* changedText = new char[valueA + valueB + 1];
    char* buf = new char[valueA - number];
    for (int i = 0; i < number; i++)
    {
        changedText[i] = masA[i];
    }
    for (int i = number; i < valueA; i++)
    {
        buf[i - number] = masA[i];
    }
    for (int i = number; i < number + valueB; i++)
    {
        changedText[i] = masB[i - number];
    }
    for (int i = number + valueB; i < valueA + valueB; i++)
    {
        changedText[i] = buf[i - number - valueB];
    }
    changedText[valueA + valueB] = '\0';
    return changedText;
    delete[] changedText;
    delete[] buf;
}

void vvod()
{
    std::cout << "��������� ������ ����������, ������ 253505\n";
    std::cout << "\t������� 2\n";
    std::cout << "\t������� 4\n";
    std::cout << "� ������ ����� ���������� ������� �������� ���������. \n \n";
}

bool repeat()
{
    std::cout << "\n   ������ ���������� ?\n" << "1 - ��\t0 - ���\n";
    int q = intCheck(0, 1);
    if (q == 1)
    {
        system("cls");
        return true;
    }
}