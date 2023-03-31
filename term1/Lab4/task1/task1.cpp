#include <iostream>
int check();
int diap();
int qcheck();
int main()
{
    int q, l = 0;
    setlocale(LC_ALL, "Russian");
    do {
        std::cout << "Антихович Максим Викторович\n" << "Вариант 4\n" << "Задание 1\n";
        std::cout << "--Ввеcти одномерный статитечский массив из k чисел. Определить, упорядочены ли элементы массива по убыванию-- \n";
        std::cout << "Введите количество элементов в массиве:\n";
        int k = diap();
        int a[500];
        std::cout << "Вводите элементы массива по-одному в столбик:\n";
        for (int i = 0; i < k; i++)
        {
            std::cout << "Введите " << i + 1 << "-й элемент\n";
            a[i] = check();
        }
        //ввод 
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
        
        // проверка на то чтобы убывало 
        std::cout << "Хотите продолжить?\n 0 - Нет\t 1 - Да\n";
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
            std::cout << "Ошибка. Введите корректное значение" << '\n';
        }
        if (!isIncorrect && std::cin.get() != '\n')
        {
            std::cin.clear();
            while (std::cin.get() != '\n');

            std::cout << "Ошибка. Введите корректное значение" << '\n';
            isIncorrect = true;
        }
        if (!isIncorrect && (k < MIN || k > 1))
        {
            isIncorrect = true;
            std::cout << "Ошибка. Введите корректное значение" << '\n';
        }
    } while (isIncorrect);
    return k;
}