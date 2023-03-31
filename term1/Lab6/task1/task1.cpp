#include <iostream>

void print();
int intCheck(int min, int max);
char* textInput(char* text2, int& j, int& netoshibki);
char* result(char* str, char* text2, int, int& r);
bool repeat();
void printInfo(char*, int);
int main()
{
    setlocale(LC_ALL, "Russian");
    int q = 0;
    do {
        int j = 0, netoshibki = 1;
        print();
        std::cout << " Введите вашу строку:\n";
        char* text2 = new char[81];
        text2 = textInput(text2, j, netoshibki);
        if (netoshibki == 0)
        {
            std::cin.ignore(320678780, '\n');
        }
        else
        {
            printInfo(text2, j);
        }
        delete[] text2;
    } while (repeat());
    return 0;
}



void print()
{
    std::cout << "Антихович Максим Викторович, группа 253505\n";
    std::cout << "\tЗадание 1\n";
    std::cout << "\tВариант 4\n";
    std::cout << "В строке, состоящей из групп нулей и единиц, найти и вывести на экран группы с четным количеством символов. \n \n";
}

void printInfo(char* text2, int j) {
    char* str = new char[81];
    int r = 0;
    str = result(str, text2, j, r);
    if (str[0] == '\0') {
        std::cout << "Таких групп нет!";
    }
    else {
        std::cout << " Группы с четным количеством символов:\n";
        std::cout << str;
    }
    delete[] str;
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
        if (!isIncorrect && (n <= min || n >= max))
        {
            isIncorrect = true;
            std::cout << "RANGE ERROR" << '\n';
        }
    } while (isIncorrect);
    return n;
}

char* textInput(char* text2, int& j, int& netoshibki)
{
    while (true)
    {
        text2[j] = (char)getchar();
        if (j == 80)
        {
            std::cout << "Error\n";
            netoshibki = 0;
            break;
        }
        if (text2[j] == '\n')
        {
            break;
        }
        if (text2[j] != '0' && text2[j] != '1' && text2[j] != ' ')
        {
            std::cout << "Wrong input\n";
            netoshibki = 0;
            break;
        }
        j++;
    }
    text2[j] = '\0';
    return text2;
}

char* result(char* str, char* text2, int j, int& r)
{
    for (int i = 0, a = 0, b; i < j; i++)
    {
        if (text2[i] != text2[i + 1])
        {
            b = i;
            if ((b - a) % 2 == 1)
            {

                for (int s = a; s <= b; s++)
                {
                    str[r] = text2[s];
                    r++;
                }
            }
            a = i + 1;
        }
    }
    str[r] = '\0';
    return str;
}

bool repeat()
{
    std::cout << "\n   Хотите продолжить ?\n" << "1 - Да\t0 - Нет\n";
    int q = intCheck(-1, 2);
    if (q == 1)
    {
        system("cls");
        return true;
    }
}