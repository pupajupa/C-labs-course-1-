#include <iostream>
#include <iomanip>
#include <cmath>
long double sinx(long double x);
long double cosx(long double x);
long double lnx(long double x);
int main()
{
    setlocale(LC_ALL, "Russian");
    long double x;
    bool isIncorrect;
    do
    {
        isIncorrect = false;
        std::cout << "Enter x:" << '\n';
        std::cin >> x;
        if (std::cin.fail()) {
            isIncorrect = true;
            std::cout << "Ошибка. Введите корректное число" << '\n';
            std::cin.clear();
            while (std::cin.get() != '\n');
        }
        if (!isIncorrect && x == 0)
        {
            isIncorrect = true;
            std::cout << "Ошибка. " << '\n';
        }
        if (!isIncorrect && (x < -1e20 || x > 1e20))
        {
            isIncorrect = true;
            std::cout << "Ошибка. Неверный диапазон числа" << '\n';
        }

    } while (isIncorrect);
    x = x - (int)(x / 6.28318530718) * 6.28318530718;
    std::cout << std::setprecision(15) << "sinx = " << sinx(x) << "\tlibSin = " << sin(x) << std::endl;
    std::cout << std::setprecision(15) << "cosx = " << cosx(x) << "\tlibCos = " << cos(x) << std::endl;
    std::cout << std::setprecision(15) << "ln|x| = " << lnx(x) << "\tlibLn = " << log(fabs(x)) << std::endl;
    if (sinx(x) < cosx(x) && sinx(x) < lnx(x))
    {
        std::cout << "Минимальное значение - sin(x) = " << sinx(x);
    }
    else if (cosx(x) < sinx(x) && cosx(x) < lnx(x))
    {
        std::cout << "Минимальное значение - cos(x) = " << cosx(x);
    }
    else
    {
        std::cout << "Минимальное значение - ln|x| = " << lnx(x);
    }
    return 0;
}

long double sinx(long double x)
{
    double n = x;
    double sum = 0.0;
    int i = 1;
    do
    {
        sum += n;
        n *= -1.0 * x * x / ((2 * i) * (2 * i + 1));
        i++;
    } while (fabs(n) > 0.000000000000001);
    return sum;
}

long double cosx(long double x)
{
    long double n = 1.0;
    long double sum = 0.0;
    long int i = 1;
    do
    {
        sum += n;
        n *= -1.0 * x * x / ((2 * i - 1) * (2 * i));
        i++;
    } while (fabs(n) > 0.000000000000001);
    return sum;
}

long double lnx(long double x)
{
    long double ans = 0, k = 1, num = 0, sgn = 1;
    if (x < 0)
        x = -x;
    if (x < 1) 
    { 
        x = powl(x, -1); sgn = -1; 
    }
    while (x > 2) {
        x /= exp(1);
        num++;
    }
    for (int i = 1; i <= 1e6; i++) {
        long double alfa = k / i;
        ans += (x - 1) / (x)*alfa;
        k *= (x - 1) / (x);
    }
    return sgn * (ans + num);
}