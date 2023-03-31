//Даны действительные положительные числа x, y, z. Выяснить, существует ли треугольник с длинами сторон x, y, z.

#include <iostream>

int main() {
    long long x, y, z;
    std::cin >> x >> y >> z;
    if ((x <= 0) || (y <= 0) || (z <= 0))
    {
        std::cout << "NO";
    }
    else if (x + y > z && x + z > y && y + z > x)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}