#include <iostream>

void vvod();
long long intCheck(long long, long long);
long long** masInit(long long, long long);
long long** masInput(long long**, long long, long long);
void printArr(long long**, long long, long long);
void printInfo(long long**, long long, long long, long long);
long long* masCol(long long**, long long, long long, long long&);
long long sumValue(long long*, long long);
long long povtor();

int main()
{
    long long q;
    do {
        setlocale(LC_ALL, "Russian");
        vvod();
        long long row = 0,col = 0;
        std::cout << "Введите количество строк \n";
        row = intCheck(1, 100000);
        std::cout << "Ведите количество столбцов\n";
        col = intCheck(1, 100000);
        long long** arr = masInit(row, col);
        arr = masInput(arr, row, col);
        std::cout << "Ваш массив :\n";
        printArr(arr, row, col);
        std::cout << std::endl;
        long long k = 0;
        printInfo(arr, row, col, k);
        for (long long count = 0; count < row; count++)
        {
            delete[] arr[count];
        }
        delete[] arr;
        q = povtor();
    } while (q == 1);
    return 0;
}

inline void vvod()
{
    std::cout << "Антихович Максим Викторович, группа 253505.\n" << "Вариант 4\n" << "Задание 5\n" << "Дан двумерный динамический массив целых чисел. Значения элементов данного массива ввести с клавиатуры.\n";
    std::cout << "Создать динамический массив из элементов, расположенных в четных столбцах данного массива и имеющих нечетное значение.\n";
    std::cout << "Вычислить среднее арифметическое элементов динамического массива.\n";
    std::cout << "Вывести результат на экран.\n";
}

long long intCheck(long long min, long long max)
{
    long long x = 0;
    while (scanf_s("%lld", &x) != 1 || (x < min || x > max) || getchar() != '\n')
    {
        printf("Error\n");
        rewind(stdin);
    }
    return x;
}

long long** masInit(long long row, long long col)
{
    long long** arr = new long long* [row];
    for (long long i = 0; i < row; i++)
    {
        arr[i] = new long long[col];
    }
    return arr;

}

long long** masInput(long long** arr, long long row, long long col)
{
    for (long long i = 0; i < row; i++)
    {
        for (long long j = 0; j < col; j++)
        {
            std::cout << " Ведите элемент массива " << i << " " << j << std::endl;
            arr[i][j] = intCheck(-10000000, 10000000);
        }
    }
    return arr;
}

void printArr(long long** arr, long long row, long long col)
{
    for (long long i = 0; i < row; i++)
    {
        for (long long j = 0; j < col; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
}



long long* masCol(long long** arr, long long row, long long col, long long &t)
{
    long long* arr1 = new long long[row * col / 2 + 1];
    for (long long i = 0; i < row; i++)
    {
        for (long long j = 0; j < col; j++)
        {
            if (j % 2 == 0 && arr[i][j] % 2 == 1)
            {
                arr1[t] = arr[i][j];
                std::cout << arr1[t] << " ";
                t++;
            }
        }
    }
    return arr1;
}

long long sumValue(long long* arr, long long colValue)
{
    long long sum = 0, value = 0;
    for (long long i = 0; i < colValue; i++)
    {
        sum += arr[i];
    }
    value = sum / colValue;
    return value;
}
void printInfo(long long** arr, long long row, long long col, long long k)
{
        std::cout << std::endl;
        std::cout << "Полученный массив :\n";
        long long* arr1 = masCol(arr, row, col, k);
        std::cout << std::endl;
        long long sum = 0;
        sum = sumValue(arr1, k);
        std::cout << std::endl;
        std::cout << "Среднее арифметическое элементов :\n" << sum << '\n';
        delete[] arr1;
}

long long povtor()
{
    long long x;
    printf("\nХотите продолжить?\n 1 - Да\t 0 - Нет\n");
    while (scanf_s("%lld", &x) != 1 || x < 0 || x > 1 || getchar() != '\n')
    {
        printf("Error\n");
        rewind(stdin);
    }
    if (x == 1)
    {
        system("cls");
    }
    return x;
}