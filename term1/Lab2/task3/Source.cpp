//������� �� ���� �������� ���������� ������ ���� � � Y �������� ����, � � ������ �� ��������� - �������� ������ ���; ���������� �� ��� ��������� �������� ���������� ������������� ���� �, � � � ��������� �� K. K �������� � ����������.

//�������� X, Y, A, B, C.
#include <iostream>

int main() {
    long int X, Y;
    long double A, B, C, K;
    std::cin >> X >> Y; "\n";
    std::cin >> A >> B >> C >> K;

    if (X > Y)
    {
        Y = 0;
        std::cout << X << " " << Y << "\n";
    }
    else if (Y > X)
    {
        X = 0;
        std::cout << X << " " << Y << "\n";
    }

    else
    {
        X = 0;
        Y = 0;
        std::cout << X << " " << Y << "\n";
    }

    if (A >= B && A >= C)
    {
        A = A - K;
        std::cout << A << " " << B << " " << C;
    }

    else if (B >= A && B >= C)
    {
        B = B - K;
        std::cout << A << " " << B << " " << C;
    }

    else if (C >= A && C >= B)
    {
        C = C - K;
        std::cout << A << " " << B << " " << C;
    }

    return 0;

}
