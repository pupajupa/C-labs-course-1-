#include <iostream>
#include <cmath>
int main() {
    long long num = 0, leftdirection = 0, updirection = 0, mid = 0, j = 0, i = 0, result = 1, ii = 0, jj = 0;
    std::cin >> num;
    //ѕервое верхнее
    updirection = pow(trunc(sqrt(num)), 2) + 1;
    //ѕервое левое 
    leftdirection = pow(ceil(sqrt(num)), 2);
    //÷ентр диагонали
    mid = (leftdirection + updirection) / 2; 
    for (long long p = 1; result < leftdirection; p++)
    {
        result += 2 * p + 1;
        i++;
    }
    if (num == leftdirection)
    {
        std::cout << i << " " << j; //лева€ часть
        return 0;
    }
    result = 1;
    for (long long p = 0; result < updirection; p++) 
    {
        result += 2 * p + 1;
        j++;
    }
    if (num == updirection) 
    {
        std::cout << "0" << " " << j; //верхн€€ часть
        return 0;
    }
    result = 0;
    if (num < mid) 
    {
        for (ii = 0; result < num; ii++) {
            result = updirection + 1 + ii;
        }
        std::cout << ii << " " << j;
        return 0;
    }
    else if (num > mid) 
    {
        result = 0;
        for (jj = 0; result > num; jj++) 
        {
            result = leftdirection - 1 - jj;
        }
        std::cout << i << " " << jj;
        return 0;
    }
    if (num == mid) 
    {
        std::cout << i << " " << j; //центр
    }
    return 0;
}