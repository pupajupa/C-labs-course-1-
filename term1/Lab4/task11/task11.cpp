#include <iostream>
int qcheck();
int checkbomb(int pr);
int check();
int checklocation(int n, int m);
int main()
{
	setlocale(LC_ALL, "Russian");
	int q;
	do {
		std::cout << "Антихович Максим Викторович\n" << "Вариант 4\n" << "Задание 11\n";
		std::cout << "На вход подаётся поле для игры в -сапёр- размером n*m символов,где символ '*' означает бомбу.\nТребуется дополнить это поле числами, как в оригинальной игре.\nВыделение памяти через функции языка С\n";
		//srand(time(NULL));
		int n = 0, m = 0, bomb = 0, count = 0, x = 0, y = 0, pr = 0;
		std::cout << "Введите размеры поля:\n";
		n = check();
		m = check();
		pr = n * m;
		std::cout << "Введите количество бомб:\n";
		bomb = checkbomb(pr);
		char** arr = (char**)malloc((n+2) * sizeof(char*));
		for (int i = 0; i < n+2; i++)
		{	
			arr[i] = (char*)malloc((m+2) * sizeof(char));
			for (int j = 0; j < m+2; j++)
			{
				arr[i][j] = '.';
			}
		}

		//x = rand() % n;
		//y = rand() % m;
		for (int i = 0; i < bomb; i++)
		{
			std::cout << "Введите расположение бомб:\n";
			x = checklocation(n, m);
			y = checklocation(n, m);
			arr[x][y] = '*';
		}
		for (int i = 1; i < n + 1; i++)
		{
			for (int j = 1; j < m + 1; j++)
			{
				if (arr[i][j] != '*')
				{
					if (arr[i - 1][j] == '*')
						count++;
					if (arr[i - 1][j - 1] == '*')
						count++;
					if (arr[i - 1][j + 1] == '*')
							count++;
					if (arr[i + 1][j + 1] == '*')
						count++;
					if (arr[i + 1][j - 1] == '*')
						count++;
					if (arr[i + 1][j] == '*')
						count++;
					if (arr[i][j - 1] == '*')
						count++;
					if (arr[i][j + 1] == '*')
						count++;
					std::cout << count;
					count = 0;
				}
				else
				{
					std::cout << arr[i][j];
				}
				if (j != m)
					std::cout << " ";
			}
			std::cout << '\n';
		}
		for (int i = 0; i < n+2; i++)
	    free(arr[i]);
		free(arr);
		std::cout << "Хотите продолжить?\n 0 - Нет\t 1 - Да\n";
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
	const int MIN = 1;
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
			std::cout << "Ошибка. Введите корректное значение" << '\n';
		}
		if (!isIncorrect && std::cin.get() != '\n')
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Ошибка. Введите корректное значение"<< '\n';
			isIncorrect = true;
		}
		if (!isIncorrect && (k < MIN || k > MAX))
		{
			isIncorrect = true;
			std::cout << "Ошибка. Введите корректное значение" << '\n';
		}
	} while (isIncorrect);
	return k;
}
int checkbomb(int pr)
{
	int k;
	const int MIN = 1;
	bool isIncorrect;
	do {
		isIncorrect = false;
		std::cin >> k;
		if (std::cin.fail())
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			isIncorrect = true;
			std::cout << "Ошибка. Введите корректное значение" << '\n';
		}
		if (!isIncorrect && std::cin.get() != '\n')
		{
			std::cin.clear();
			while (std::cin.get() != '\n');

			std::cout << "Ошибка. Введите корректное значение" << '\n';
			isIncorrect = true;
		}
		if (!isIncorrect && (k < MIN || k > INT_MAX))
		{
			isIncorrect = true;
			std::cout << "Ошибка. Введите корректное значение" << '\n';
		}
	} while (isIncorrect);
	return k;
}
int checklocation(int n, int m)
{
	int k;
	const int MIN = 1;
	bool isIncorrect;
	do {
		isIncorrect = false;
		std::cin >> k;
		if (std::cin.fail())
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			isIncorrect = true;
			std::cout << "Ошибка. Введите корректное значение" << '\n';
		}
		if (!isIncorrect && std::cin.get() != '\n')
		{
			std::cin.clear();
			while (std::cin.get() != '\n');

			std::cout << "Ошибка. Введите корректное значение" << '\n';
			isIncorrect = true;
		}
		if (!isIncorrect && (k < MIN || k > n || k > m))
		{
			isIncorrect = true;
			std::cout << "Ошибка. Введите корректное значение" << '\n';
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
			std::cout << "Ошибка. Введите корректное значение" << '\n';
		}
		if (!isIncorrect && std::cin.get() != '\n')
		{
			std::cin.clear();
			while (std::cin.get() != '\n');

			std::cout << "Ошибка. Введите корректное значение" << '\n';
			isIncorrect = true;
		}
		if (!isIncorrect && (k < MIN || k > 1 ))
		{
			isIncorrect = true;
			std::cout << "Ошибка. Введите корректное значение" << '\n';
		}
	} while (isIncorrect);
	return k;
}