#include <iostream>

int main()
{
    int n, x = 0, y = 0, z = 0, mas = 0;
    int* arr = new int[mas];
    int max = arr[0];
    int min = arr[0];
    while (std::cin >> n)
    {
        arr[mas] = n;
        mas++;
    }
    for (int i = 0; i < mas; i++)
    {
        if (arr[i] == 0)
            z++;
    }
    for (int i = 0; i < mas; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            x = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            y = i;
        }
    }
    for (int i = 0; i < mas; i++)
    {
        if ((i > x && i < y) || (i > y && i < x))
        {
            arr[i] = 0;
        }
    }
    int n2 = mas - z;
    int* arr2 = new int[n2];
    int m = 0;
    if (z > mas / 2)
    {
        for (int i = 0; i < mas; ++i)
        {
            if (arr[i] != 0)
            {
                arr2[m] = arr[i];
                m++;
            }
        }
        for (int j = 0; j < m; ++j)
        {
            std::cout << arr2[j] << " ";
        }
    }
    else
    {
        for (int i = 0; i < mas; i++)
            std::cout << arr[i] << " ";
    }
    return 0;
}