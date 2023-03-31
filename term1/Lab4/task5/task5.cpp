#include <iostream>
void printMatrix(int** arr, int n, int m);
int** getResult(int** arr1, int n, int m);
void deleteArr(int** arr, int n);
int func(int k, int m, int** arr);
int main() {
	int n = 0, m = 0, max = 0;
	std::cin >> n;
	std::cin >> m;
	int** arr1 = new int* [n];
	int** arr2 = new int* [n];
	for (int i = 0; i < n; i++) 
	{
		arr1[i] = new int[m];
		arr2[i] = new int[m];
		for (int j = 0; j < m; j++) 
		{
			std::cin >> arr1[i][j];
		}
	}
	arr2 = getResult(arr1, n, m);
	printMatrix(arr2, n, m);
	deleteArr(arr1, n);
	deleteArr(arr2, n);
	return 0;
}

void printMatrix(int** arr, int n, int m)
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++) 
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}
int** getResult(int** arr1, int n, int m)
{
	int max = 0;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++) 
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = func(i, j, arr1);
		}
	}
	return arr;
}
int func(int k, int m, int** arr) {
	int max = 0;
	for (int i = 0; i < k + 1; i++) {
		for (int j = 0; j < m + 1; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
		}
	}
	return max;
}
void deleteArr(int** arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
}