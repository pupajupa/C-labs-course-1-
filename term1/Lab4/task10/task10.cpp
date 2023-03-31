#include <iostream> 
int main()
{
    long long n, n1, n2, SIZE = 100, k = 1, m = 1, u, l, p = 0, min = 60;
    std::cin >> n;
    if (n % 2 == 0) {
        n1 = n / 2;
        n2 = n - 1;
    }
    else {
        n1 = (n - 1) / 2;
        n2 = n;
    }
    long long* A = new long long[SIZE]();
    long long* B = new long long[SIZE]();
    long long* C = new long long[SIZE]();
    u = n1;
    l = n2;
    while (u /= 10) {
        k++;
    }
    while (l /= 10) {
        m++;
    }
    for (int i = SIZE - 1; i >= SIZE - 1 - k; i--) {
        A[i] = n1 % 10;
        n1 /= 10;
    }
    for (int i = SIZE - 1; i >= SIZE - 1 - m; i--) {
        B[i] = n2 % 10;
        n2 /= 10;
    }
    C[SIZE - 1] = 1;
    for (int i = SIZE - 1; i >= SIZE - 1 - k; i--) {
        for (int j = SIZE - 1; j >= SIZE - 1 - m; j--) {
            C[j - p] += A[i] * B[j];
            C[j - p - 1] += C[j - p] / 10;
            if (j - p - 1 < min) {
                min = j - p - 1;
            }
            C[j - p] %= 10;
        }
        p++;
    }
    C[0] = -1;
    C[1] = -1;
    for (int i = 2; i < SIZE; i++) {
        if (C[i] == 0 && C[i - 1] == -1) {
            C[i] = -1;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        if (C[i] != -1) {
            std::cout << C[i];
        }
    }
    delete[] A;
    delete[] B;
    delete[] C;
    return 0;
}