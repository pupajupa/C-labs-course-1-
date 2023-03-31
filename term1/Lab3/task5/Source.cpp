/*Лабораторная работа 3. Задание 5. Вариант 4
Необходимо разложить функцию Y(x) из своего варианта в ряд S(x), затем с
помощью полученного ряда найти значение функции и сравнить его со значением,
вычисленным с помощью стандартных функций. программа должна запросить у
пользователя количество членов ряда (n), затем запросить у пользователя
количество чисел, от которых он хочет посчитать функцию, затем пользователь
вводит по одному числу (x от 0.1, до 1), программа считает значение функции с
помощью ряда и с помощью стандартных функций и выводит оба значения*/
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    const int MIN = 1;
    const int MAX = 32;
    long long n, num, fact = 1;
    long double step2 = 1, step1 = 1, x = 0;
    bool isIncorrect;
    
    //n check
    
    do 
    {
        isIncorrect = false;
        std::cout << "Введите количество членов ряда" << '\n';
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
    
    //num check
    
    do 
    {
        isIncorrect = false;
        std::cout << "Введите количество чисел, от которых вы хотите посчитать функцию" << '\n';
        std::cin >> num;
        if (std::cin.fail()) {
            isIncorrect = true;
            std::cout << "Ошибка. Введите корректное число" << '\n';
            std::cin.clear();
            while (std::cin.get() != '\n');
        }
        if (!isIncorrect && (num < MIN || num > MAX))
        {
            isIncorrect = true;
            std::cout << "Ошибка. Неверный диапазон числа" << '\n';
        }
    } while (isIncorrect);
    
    //x check
    
    for (int j = 0; j < num; j++)
    {
        do
        {
            isIncorrect = false;
            std::cout << "Введите значение x:" << '\n';
            std::cin >> x;
            if (std::cin.fail()) 
            {
                isIncorrect = true;
                std::cout << "Ошибка. Введите корректное число" << '\n';
                std::cin.clear();
                while (std::cin.get() != '\n');
            }
            if (!isIncorrect && (x > 1 || x < 0.1))
            {
                isIncorrect = true;
                std::cout << "Ошибка. Неверный диапазон числа" << '\n';
            }
        } while (isIncorrect);
        double sum = 1.0000000 - pow(x, 2) / 2;

        //factorial
        
        for (int i = 1; i <= 2 * n; i++)
        {
            fact = fact * i;
        }

        //summa

        x = x - (int)(x / 6.28318530718) * 6.28318530718;
        for (int k = 1; k < n; k++)
        {
            for (int i = 1; i <= n; i++)
            {
                //stepen x^2n
                step2 = pow(x, 2 * n);
                //stepen (-1)^n
                step1 = pow(-1, n);
                sum += step1 * (step2 / fact);
            }
        }
        std::cout << "Значение функции с помощью ряда = " << sum << std::endl;
        std::cout << "Значение стандартной функции = " << cos(x) << std::endl;
    }
    return 0;
}