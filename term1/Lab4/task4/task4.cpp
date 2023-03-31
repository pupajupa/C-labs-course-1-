#include <iostream>
int main()
{
    int row, col;
    int cnt = 0;
    bool flag;
    std::cin >> row >> col;
    if (row <= 0 || col < 0)
    {
        std::cout << "ERROR";
        return 0;
    }
    int** arr = new int* [row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[row];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    int k = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            flag = true;
            if (i > 0 && arr[i - 1][j] <= arr[i][j])
                flag = false;
            if (j > 0 && arr[i][j - 1] <= arr[i][j])
                flag = false;
            if (i < row - 1 && arr[i + 1][j] <= arr[i][j])
                flag = false;
            if (j < col - 1 && arr[i][j + 1] <= arr[i][j])
                flag = false;
            if (flag)
                k++;
        }
    }
    std::cout << k;
    return 0;
}