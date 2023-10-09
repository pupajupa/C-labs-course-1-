#include <iostream>
using namespace std;
int n;
void qsortRecursive(int* mas, int size);
int binSearch(int* arr, int num, int size);
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "������� ���������� �����, ������� �� ������ ������: ";
    cin >> n;
    cout << "������� " << n << " �����: ";
    int* list = new int[n]; // �������
    // ������������ ������
    for (int i = 0; i < n; i++)
    {
        cin >> list[i]; // ��������� ����� � ������ �������
    }
    qsortRecursive(list, n);
    cout << "\n\nSorted array \n";
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << " ";
    }
    cout << "\n ������� ����� ������� ����� �����\n";
    int num;
    cin >> num;
    cout << "\n������ �������� " << num << " � ������� �����: " << binSearch(list, num, n);
    return 0;
}
void qsortRecursive(int* mas, int size) {
    //��������� � ������ � � ����� �������
    int i = 0;
    int j = size - 1;

    //����������� ������� �������
    int mid = mas[size / 2];

    //����� ������
    do {
        //��������� ��������, ���� ��, ������� ����� ���������� � ������ �����
        //� ����� ����� ������� ����������(��������� �� �����) ��������, ������� ������ ������������
        while (mas[i] < mid) {
            i++;
        }
        //� ������ ����� ���������� ��������, ������� ������ ������������
        while (mas[j] > mid) {
            j--;
        }

        //������ �������� �������
        if (i <= j) {
            int tmp = mas[i];
            mas[i] = mas[j];
            mas[j] = tmp;

            i++;
            j--;
        }
    } while (i <= j);


    //����������� ������, ���� ��������, ��� �����������
    if (j > 0) {
        //"����� �����"
        qsortRecursive(mas, j + 1);
    }
    if (i < size) {
        //"����� �����"
        qsortRecursive(&mas[i], size - i);
    }
}

int binSearch(int* arr, int num, int size) //������� ������� �������� ������� ���� ����� � ���� ������� � ������ �������
{
    bool flag = false; 
    int left = 0;
    int right = size - 1;
    int middle;
    while ((left <= right) && (flag != true))
    {
        middle = (left + right) / 2;
        if (arr[middle] == num)
        {
            flag = true;
            return middle;
        }
        if (arr[middle] < num)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    return -1;
}
/*
unsigned long long int binpow(unsigned long long int a, unsigned long long int n)
{
    unsigned long long int res = 1;
    if (n == 0)
        return 1;
    if (n % 2 == 1)
        return binpow(a, n - 1) * a;
    else
    {
        int b = binpow(a, n / 2);
        return b * b;
    }
}
*/