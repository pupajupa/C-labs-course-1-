/*Вычислить сумму четных чисел на промежутке от 1 до числа, введенного 
пользователем:
4.2 Без использования цикла.*/
#include <iostream>
int main()
{
    setlocale(LC_ALL, "Russian");
    long long n, s = 0;
    const int MIN = 1;
    std::cout << "Введите n" << '\n';
    std::cin >> n;
    if (n < MIN)
    {
        std::cout << "Ошибка. Неверный диапазон числа";
    }
    else 
    {
        if (n >= 0)
        {
            int d = n / 2;
            s = (2 + n) / 2 * d;
            std::cout << s;
        }
    }
    return 0;
}