#include <iostream>
int check();
int qcheck();
int main()
{
	int q;
	setlocale(LC_ALL, "Russian");
	do {
		std::cout << "��������� ������ ����������\n" << "������� 4\n" << "������� 9\n";
		std::cout << "��� ��������� ������������ ������ �������� n ^ 3 ����� ��������������� �����.\n���������� ���������� ��������� � ���������� ������ �����.\n��� ������ ���������� ������ ������������ ��������� �����.\n��������� ������ ����� ������� ����� �.\n";
		int n = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
		std::cout << "\n������� ������ �������\n";
		n = check();
		int*** arr = (int***)malloc(n * sizeof(int**));
		for (int i = 0; i < n; i++)
		{
			arr[i] = (int**)malloc(n * sizeof(int*));
			for (int j = 0; j < n; j++)
			{
				arr[i][j] = (int*)malloc(n * sizeof(int));
				for (int k = 0; k < n; k++)
				{
					std::cout << "������� " << i << " " << j << " " << k << " ������� �������\n";
					arr[i][j][k] = check();
				}
			}
		}
		std::cout << '\n';
		std::cout << "���� ���������� �������:\n";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < n; k++)
				{
					std::cout << arr[i][j][k] << " ";
				}
				std::cout << '\n';
			}
			std::cout << '\n';
		}
		for (int i = 0; i < n; i++)
		{
			sum1 += arr[i][i][i];
		}
		std::cout << "sum1 = " << sum1 << '\n';

		for (int i = 0, j = n - 1; i < n; i++, j--)
		{
			sum2 += arr[j][j][i];
		}
		std::cout << "sum2 = " << sum2 << '\n';

		for (int i = 0, j = n - 1; i < n; i++, j--)
		{
			sum3 += arr[i][j][i];
		}
		std::cout << "sum3 = " << sum3 << '\n';

		for (int i = 0, j = n - 1; i < n; i++, j--)
		{
			sum4 += arr[j][i][i];
		}
		std::cout << "sum4 = " << sum4 << '\n';

		int max = std::max(std::max(sum1, sum2), std::max(sum3, sum4));
		std::cout << "\n��������� � ���������� ������ ����� = ";
		if (max == sum1)
		{
			std::cout << "sum1 = " << max << '\n';
		}
		if (max == sum2)
		{
			std::cout << "sum2 = " << max << '\n';
		}
		if (max == sum3)
		{
			std::cout << "sum3 = " << max << '\n';
		}
		if (max == sum4)
		{
			std::cout << "sum4 = " << max << '\n';
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				free(arr[i][j]);
			}
			free(arr[i]);
		}
		free(arr);
		std::cout << "\n������ ����������?\n 0 - ���\t 1 - ��\n";
		q = qcheck();
		if (q == 1)
		{
			system("cls");
		}
	} while (q == 1);
}
int check()
{
	int k;
	const int MIN = 0;
	const int MAX = INT_MAX;
	bool isIncorrect;
	do {
		isIncorrect = false;
		std::cin >> k;
		if (std::cin.fail())
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			isIncorrect = true;
			std::cout << "������. ������� ���������� ��������" << '\n';
		}
		if (!isIncorrect && std::cin.get() != '\n')
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "������. ������� ���������� ��������" << '\n';
			isIncorrect = true;
		}
		if (!isIncorrect && (k < MIN || k > MAX))
		{
			isIncorrect = true;
			std::cout << "������. ������� ���������� ��������" << '\n';
		}
	} while (isIncorrect);
	return k;
}
int qcheck()
{
	int k;
	const int MIN = 0;
	bool isIncorrect;
	do {
		isIncorrect = false;
		std::cin >> k;
		if (std::cin.fail())
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			isIncorrect = true;
			std::cout << "������. ������� ���������� ��������" << '\n';
		}
		if (!isIncorrect && std::cin.get() != '\n')
		{
			std::cin.clear();
			while (std::cin.get() != '\n');

			std::cout << "������. ������� ���������� ��������" << '\n';
			isIncorrect = true;
		}
		if (!isIncorrect && (k < MIN || k > 1))
		{
			isIncorrect = true;
			std::cout << "������. ������� ���������� ��������" << '\n';
		}
	} while (isIncorrect);
	return k;
}