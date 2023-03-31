#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Антихович Максим Викторович\n" << "Вариант 4\n" << "Задание 8\n";
	cout << "В качестве входных данных поступают две целочисленные матрицы A и B, которые имеют размер N и соответственно.\n";
	cout << "Требуется найти произведение матриц A * B.\n";
	int n1, m1, n2, m2;
	cin >> n1;
	m1 = n1;
	int** A = new int* [n1];
	for (int i = 0; i < n1; i++) {
		A[i] = new int[m1];
	}
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < m1; j++) {
			cin >> A[i][j];
		}
	}
	cin >> n2;
	m2 = n1;
	// Проверяем возможность вычисления произведения матриц
	if (m1 != n2) {
		cout << -1;
		return 0;
	}
	int** B = new int* [n2];
	for (int i = 0; i < n2; i++) {
		B[i] = new int[m2];
	}
	for (int i = 0; i < n2; i++) {
		for (int j = 0; j < m2; j++) {
			cin >> B[i][j];
		}
	}

	int** result = new int* [n1];
	// Вычисляем произведение
	for (int i = 0; i < n1; i++) {
		result[i] = new int[m2];
		for (int j = 0; j < m2; j++) {
			result[i][j] = 0;
			for (int r = 0; r < m1; r++) {
				result[i][j] += A[i][r] * B[r][j];
			}
			cout << result[i][j];
			if (j != n1 - 1)
			{
				cout << " ";
			}
		}
		cout << '\n';
	}
	// Выводим результат
	for (int i = 0; i < n1; i++) {
		delete[] A[i];
	}
	for (int i = 0; i < n2; i++) {
		delete[] B[i];
	}
	return 0;
}