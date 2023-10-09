#include <iostream>
using namespace std;
int n;
void qsortRecursive(int* mas, int size);
int binSearch(int* arr, int num, int size);
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество чисел, которое вы хотите ввести: ";
    cin >> n;
    cout << "Введите " << n << " чисел: ";
    int* list = new int[n]; // создаем
    // динамический массив
    for (int i = 0; i < n; i++)
    {
        cin >> list[i]; // считываем числа в ячейки массива
    }
    qsortRecursive(list, n);
    cout << "\n\nSorted array \n";
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << " ";
    }
    cout << "\n Введите число которое нужно найти\n";
    int num;
    cin >> num;
    cout << "\nИндекс элемента " << num << " в массиве равен: " << binSearch(list, num, n);
    return 0;
}
void qsortRecursive(int* mas, int size) {
    //Указатели в начало и в конец массива
    int i = 0;
    int j = size - 1;

    //Центральный элемент массива
    int mid = mas[size / 2];

    //Делим массив
    do {
        //Пробегаем элементы, ищем те, которые нужно перекинуть в другую часть
        //В левой части массива пропускаем(оставляем на месте) элементы, которые меньше центрального
        while (mas[i] < mid) {
            i++;
        }
        //В правой части пропускаем элементы, которые больше центрального
        while (mas[j] > mid) {
            j--;
        }

        //Меняем элементы местами
        if (i <= j) {
            int tmp = mas[i];
            mas[i] = mas[j];
            mas[j] = tmp;

            i++;
            j--;
        }
    } while (i <= j);


    //Рекурсивные вызовы, если осталось, что сортировать
    if (j > 0) {
        //"Левый кусок"
        qsortRecursive(mas, j + 1);
    }
    if (i < size) {
        //"Првый кусок"
        qsortRecursive(&mas[i], size - i);
    }
}

int binSearch(int* arr, int num, int size) //подаётся массивб значение которое надо найти в этом массиве и размер массива
{
    bool flag = false; 
    int left = 0;
    int right = size - 1;
    int middle;
    while ((left <= right) && (flag != true))
    {
        middle = (left + right) / 2;
        if (arr[middle] == num)
        {
            flag = true;
            return middle;
        }
        if (arr[middle] < num)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    return -1;
}
/*
unsigned long long int binpow(unsigned long long int a, unsigned long long int n)
{
    unsigned long long int res = 1;
    if (n == 0)
        return 1;
    if (n % 2 == 1)
        return binpow(a, n - 1) * a;
    else
    {
        int b = binpow(a, n / 2);
        return b * b;
    }
}
*/