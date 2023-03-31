#include <iostream>

void vvod();
long long intCheck();
long long masCheck();
long long** masInit(long long &row, long long &col);
long long* result(long long** arr, long long row, long long col, long long& k);
long long getPr(long long* diag, long long k);
void printInfo(long long** arr, long long* diag, long long row, long long col, long long k);
long long povtor();

int main()
{
	setlocale(LC_ALL, "Russian");
	long long row, col, q, k = 0;
	do {
		vvod();
		long long** arr = masInit(row, col);
		long long* diag = result(arr, row, col, k);
		printInfo(arr, diag, row, col, k);
		q = povtor();
        delete[] arr;
		delete[] diag;
	} while (q == 1);
	return 0;
}
long long intCheck()
{
	long long x;
	while (scanf_s("%ld", &x) != 1 || x < 1 || x > INT_MAX || getchar() != '\n')    //проверка на ввод и ввод числа инт
	{
		printf("Error\n");
		rewind(stdin);
	}
	return x;
}
void vvod()
{
	std::cout << "Антихович Максим Викторович, группа 253505.\n" << "Вариант 4\n" << "Задание 3\n" << "Дан двумерный динамический массив целых чисел А размерностью N * K. Размерность массива(N = 5, K = 6) ввести с клавиатуры.\n";
	std::cout << "Значения элементов массива ввести с клавиатуры.\n";
	std::cout << "Создать динамический массив из элементов, расположенных на главной диагонали матрицы и имеющих четное значение.\n";
	std::cout << "Вычислить произведение элементов динамического массива. Созданный массив и результат произведения вывести на экран.\n";
}
long long masCheck()
{
	long long x;
	while (scanf_s("%lld", &x) != 1 || x < INT_MIN || x > INT_MAX || getchar() != '\n')    //проверка на ввод и ввод числа инт
	{
		printf("Error\n");
		rewind(stdin);
	}
	return x;
}
long long** masInit(long long &row, long long &col)
{
	std::cout << "\nВведите количество строк в массиве: ";
	row = intCheck();
	std::cout << "Введите количество столбцов в массиве: ";
	col = intCheck();
	long long k = 0;
	long long** arr = new  long long* [row];
	long long* diag = new long long[row];
	for (long long i = 0; i < row; i++)
	{
		arr[i] = new long long[col];
		for (long long j = 0; j < col; j++)
		{
			std::cout << "Введите элемент с индексом " << i << " " << j << ":\n";
			arr[i][j] = masCheck();
		}
	}
	return arr;
}

long long* result(long long** arr, long long row, long long col, long long &k)
{
	long long* diag = new long long[row];
	for (long long i = 0; i < row; i++)
	{
		for (long long j = 0; j < col; j++)
		{
			if ((i == j) && (arr[i][j] % 2 == 0) && (arr[i][j] != 0))
			{
				diag[k] = arr[i][j];
				k++;
			}
		}
	}
	return diag;
}

long long getPr(long long* diag, long long k) {
	long long pr = 1;
	for (long long i = 0; i < k; i++)
	{
		pr *= diag[i];
	}
	if (pr == 1) {
		pr = 0;
	}
	return pr;
}

void printInfo(long long** arr, long long* diag, long long row, long long col, long long k)
{
	std::cout << "Изначальный массив:\n";
	for (long long i = 0; i < row; i++)
	{
		for (long long j = 0; j < col; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << '\n';
	}
	if (getPr(diag, k) == 0)
	{
		std::cout << "\nНевозможно создать массив(нет подходящих элементов)\n";
	}
	else
	{
		std::cout << "Созданный массив:\n";
		for (long long i = 0; i < k; i++)
		{
			std::cout << diag[i] << ' ';
		}
	}
	std::cout << "\nПроизведение: " << getPr(diag, k) << '\n';
	for (long long i = 0; i < row; i++)
	{
		delete[] arr[i];
	}
}

long long povtor()
{
	long long x;
	printf("Хотите продолжить?\n 1 - Да\t 0 - Нет\n");
	while (scanf_s("%lld", &x) != 1 || x < 0 || x > 1 || getchar() != '\n') 
	{
		printf("Error\n");
		rewind(stdin);
	}
	if (x == 1)
	{
		system("cls");
	}
	return x;
}