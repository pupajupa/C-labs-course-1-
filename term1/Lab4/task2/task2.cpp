#include <iostream> 
#include <ctime>
int qcheck();
int main()
{
    int q;
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    do {
        std::cout << "Антихович Максим Викторович\n" << "Вариант 4\n" << "Задание 2\n";
        std::cout << "--Инициализировать при объявлении статический массив целых чисел размером N*M. \nОпределить произведение положительных элементов, расположенных ниже главной диагонали матрицы-- \n";
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
        std::cout << "Произведение: " << pr << "\n";
        std::cout << "Хотите продолжить?\n 0 - Нет\t 1 - Да\n";
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