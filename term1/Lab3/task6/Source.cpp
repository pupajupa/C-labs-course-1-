/*Лабораторная работа 3. Задание 6. Вариант 4
Необходимо приближенно найти корень уравнения f(x) = 0 для функции из
своего варианта. Корень нужно найти по следующему алгоритму: перебираем
значения от начала до конца интервала с некоторым шагом и ищем значение
функции, минимальное по модулю. Аргумент, при котором оно достигается,
считаем корнем уравнения. Программа должна запросить у пользователя, на
сколько частей разделить область поиска корня, вычислить шаг, с которым нужно
проходить значения, пройти в цикле нужные значения, найти корень и вывести
его*/
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
        std::cout << "Введите число, равное количеству частей, на которые вы хотите разделить область поиска корня" << '\n';
        std::cin >> n;
        if (std::cin.fail()) {
            isIncorrect = true;
            std::cout << "Ошибка. Введите корректное число" << '\n';
            std::cin.clear();
            while (std::cin.get() != '\n');
        }
        if (!isIncorrect && (n < MIN || n > MAX))
        {
            isIncorrect = true;
            std::cout << "Ошибка. Неверный диапазон числа" << '\n';
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
        std::cout << "Корень уравнения = " << s1;
    }
    else if (min > min1)
    {
        std::cout << "Корень уравнения = " << s2;
    }
    else
    {
        std::cout << "Корень уравнения = " << s1;
    }
    return 0;
}