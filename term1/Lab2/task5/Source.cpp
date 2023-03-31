//Дан квадрат с вершинами в точках(0, 0), (0, k), (k, k), (k, 0).Вычислите наименьшее из расстояний от точки с координатами(x, y), лежащей внутри или снаружи квадрата, до сторон данного квадрата.Координаты вещественные.

//Формат ввода :

//Переменные вводятся в порядке K, X, Y.

//Используйте библиотеку <iomanip> и функцию setprecision(22).

#include <iostream>
#include <iomanip>
#include <cmath>
int main() {

    long double x, k, y, r, r1, r2, r3, r4;

    std::cin >> k >> x >> y;


    if (k < 0)
    {
        k = -k;
        x = -x;
        y = -y;
    }

    if (x >= 0 && y >= k && x <= k)
    {
        r = y - k;

    }

    else   if (x > k && y > k)
    {
        r = sqrt((x - k) * (x - k) + (y - k) * (y - k));
    }

    else   if (x >= k && y <= k && y >= 0)
    {
        r = x - k;
    }
    else   if (x > k && y < 0)
    {
        r = sqrt((x - k) * (x - k) + (y * y));
    }

    else   if (x >= 0 && y <= 0 && x <= k)
    {
        if (y == 0)
        {
            r = 0;
        }
        else
        {
            r = -y;
        }
    }

    else   if (x < 0 && y < 0)
    {
        r = sqrt((x * x) + (y * y));
    }

    else   if (x <= 0 && y >= 0 && y <= k)
    {
        if (x == 0)
        {
            r = 0;
        }

        else
        {
            r = -x;
        }
    }

    else   if (x < 0 && y > k)
    {
        r = sqrt((x * x) + (y - k) * (y - k));
    }

    else
    {
        r1 = x;
        r2 = k - x;
        r3 = y;
        r4 = k - y;
        r = std::min(std::min(r1, r2), std::min(r3, r4));
    }

    std::cout << std::setprecision(22) << r << std::endl;

    return 0;

}