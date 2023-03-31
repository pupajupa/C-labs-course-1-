#include <iostream>
int main()
{
    char num;
    int size = 0, number = 0, buf = 0;
    short* arr = new short[50000];
    while (std::cin.peek() != '\n')
    {
        std::cin >> num;
        arr[size] = num - 48;
        size++;
    }
    std::cin >> buf;
    bool check = false;
    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[i] == arr[j])
            {
                check = true;
                break;
            }
        }
        if (!check)
        {
            ++number;
        }
        check = false;
    }
    std::cout << number << "\n";
    for (int i = size-1; i > -1; i--)
    {
        if (arr[i] == arr[buf - 1])
        {
            std::cout << size - i - 1 << " ";
        }
    }
    delete[] arr;
    return 0;
}