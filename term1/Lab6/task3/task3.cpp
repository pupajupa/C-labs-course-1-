#include <iostream>

int* arrWords(char*, int*, int);
void result(char*, int*, int);
char* arrInit(char*, int&, int&);
void printInfo();
int intCheck(int min, int max);
bool repeat();

int main()
{
	setlocale(LC_ALL, "Russian");
	int q = 0;
	do {
		printInfo();
		char* str = (char*)malloc(2 * sizeof(char));
		int size = 2;
		int stringCount = 0;
		std::cout << "Введите исходные строки:\n";
		str = arrInit(str, size, stringCount);
		int* words = new int[stringCount];
		words = arrWords(str, words, size);
		result(str, words, size);
		delete[] words;
		free(str);
	} while (repeat());
	return 0;
}

void printInfo()
{
	std::cout << "Антихович Максим Викторович, группа 253505\n";
	std::cout << "\tЗадание 3\n";
	std::cout << "\tВариант 4\n";
	std::cout << "Имеется массив строк. На том же месте, не заводя других массивов,";
	std::cout << "записать слова в обратном порядке,\nрассматривая все строки, т.е.первое слово";
	std::cout << "первой строки станет последним словом последней строки  \n \n";
}
int* arrWords(char* str, int* words, int size)
{
	int currCount = 1;
	int stringNum = 0;
	for (int i = 0; i < size; i++)
	{
		if (str[i] == ' ')
		{
			currCount++;
		}
		if (str[i] == '\n' || str[i] == '\0')
		{
			words[stringNum] = currCount;
			currCount = 1;
			stringNum++;
		}
	}
	return words;
}

void result(char* str, int* words, int size)
{
	int currStr = 0;
	int currWords = 0;
	for (int i = size - 1; i >= -1; i--)
	{
		if (i == -1 || str[i] == ' ' || str[i] == '\n')
		{
			for (int j = i + 1; str[j] != ' ' && str[j] != '\n'; j++)
			{
				std::cout << str[j];
			}
			std::cout << ' ';
			currWords++;
			if (currWords >= words[currStr])
			{
				currStr++;
				currWords = 0;
				std::cout << '\n';
			}
		}
	}
}

char* arrInit(char* str, int& size, int& stringCount)
{
	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			size *= 2;
			str = (char*)realloc(str, size * sizeof(char));
		}
		str[i] = (char)getchar();
		if (str[i] == ' ' && str[i - 1] == ' ')
		{
			i--;
		}
		if (str[i] == '\n' && str[i - 1] == ' ')
		{
			str[i - 1] = str[i];
			i--;
		}
		if (str[i] == '\n' && str[i - 1] == '\n')
		{
			str[i - 1] = '\0';
			size = i;
			break;
		}
		if (str[i] == '\n')
		{
			stringCount++;
		}
	}
	return str;
}

int intCheck(int min, int max)
{
	int n;
	bool isIncorrect;
	do {
		isIncorrect = false;
		std::cin >> n;
		if (std::cin.fail())
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			isIncorrect = true;
			std::cout << "TYPR ERROR" << '\n';
		}
		if (!isIncorrect && std::cin.get() != '\n')
		{
			std::cin.clear();
			while (std::cin.get() != '\n');

			std::cout << "Error" << '\n';
			isIncorrect = true;
		}
		if (!isIncorrect && (n <= min || n >= max))
		{
			isIncorrect = true;
			std::cout << "RANGE ERROR" << '\n';
		}
	} while (isIncorrect);
	return n;
}

bool repeat()
{
	std::cout << "\n   Хотите продолжить ?\n" << "1 - Да\t0 - Нет\n";
	int q = intCheck(-1, 2);
	if (q == 1)
	{
		system("cls");
		return true;
	}
}