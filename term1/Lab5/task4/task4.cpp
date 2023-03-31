#include <iostream>

int intCheck();
int povtor();
void vvod();
double** masInit(int& row, int& col);
double masCheck();
int* iResult(double** arr, int col, int row, int& k);
int* jResult(double** arr, int col, int row, int& k);
void printInfo(double** arr, int* ai, int* aj, int k, int row, int col);
int main()
{
	setlocale(LC_ALL, "Russian");
	int q;
	do {
		vvod();
		int row, col, k = 0;
		double** arr = masInit(row, col);
		int* ai = iResult(arr,col,row,k);
		k = 0;
		int* aj = jResult(arr, col, row, k);
		printInfo(arr, ai, aj, k, row, col);
		for (int i = 0; i < row; i++)
		{
			delete[] arr[i];
		}
		delete[] arr;
		delete[] ai;
		delete[] aj;
		q = povtor();
	} while (q == 1);
	return 0;
}	
void vvod()
{
	std::cout << "Антихович Максим Викторович, группа 253505.\n" << "Вариант 4\n" << "Задание 4\n" << "Создать двумерный динамический массив вещественных чисел. Определить, встречаются ли среди них элементы с нулевым значением.\n";
	std::cout << "Если встречаются такие элементы, то определить их индексы и общее количество.\n";
	std::cout << "Переставить элементы этого массива в обратном порядке и вывести на экран.\n";
}
int intCheck()
{
	int x;
	while (scanf_s("%d", &x) != 1 || x < 1 || x > INT_MAX || getchar() != '\n')  
	{
		printf("Error\n");
		rewind(stdin);
	}
	return x;
}

double masCheck()
{
	double x;
	while (scanf_s("%lf", &x) != 1.0 || x < INT_MAX || x > INT_MAX || getchar() != '\n')   
	{
		printf("Error\n");
		rewind(stdin);
	}
	return x;
}
int povtor()
{
	int x;
	printf("Хотите продолжить?\n 1 - Да\t 0 - Нет\n");
	while (scanf_s("%d", &x) != 1 || x < 0 || x > 1 || getchar() != '\n') 
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
double** masInit(int& row, int& col)
{
	std::cout << "\nВведите количество строк в массиве: ";
	row = intCheck();
	std::cout << "Введите количество столбцов в массиве: ";
	col = intCheck();
	double** arr = new  double* [row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new double[col];
		for (int j = 0; j < col; j++)
		{
			std::cout << "Введите элемент с индексом " << i << " " << j << ":\n";
			arr[i][j] = masCheck();
		}

	}
	return arr;
}
int *iResult(double** arr, int col, int row, int& k)
{
	int* ai = new int[row * col];
	ai[0] = -1;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == 0) {
				ai[k] = i;
				k++;
			}
		}
	}
	return ai;
}
int* jResult(double** arr, int col, int row, int& k)
{
	int* aj = new int[row * col];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == 0) {
				aj[k] = j;
				k++;
			}
		}
	}
	return aj;
}
void printInfo(double** arr,int* ai, int* aj, int k, int row, int col)
{
	if (ai[0] == -1) {
		std::cout << "\nНулей нет\n" << '\n';
	}
	else
	{
		std::cout << "Индексы элементов с нулями :\n";
		for (int i = 0; i < k; i++) {
			std::cout << "[" << ai[i] << "]" << " " << "[" << aj[i] << "]" << '\n';
		}
		std::cout << "Общее количество нулей : " << k << '\n';
	}
	std::cout << "Массив в обратном порядки: \n";
	for (int i = row - 1; i >= 0; i--)
	{
		for (int j = col - 1; j >= 0; j--)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << '\n';
	}
}