#include <iostream>
#include <string>

void printInfo();
int intCheck(int, int);
std::string reform(std::string s, std::string text);
std::string result(std::string s, std::string text, std::string	cons);

int main()
{
	std::string s, text;
	std::string	cons = "bBcCdDfFgGhHjJkKlLmMnNpPqQrRsStTvVwWzZxX";
	int q;
	setlocale(LC_ALL, "Russian");
	do {
		printInfo();
		std::cout << "Enter text in English:\n";
		getline(std::cin, s);
		std::cout << "Your text:\n" << s << '\n' << "Text in reform : \n";
		text = reform(s, text);
		s = text;
		text = s[0];
		std::cout << result(s,text,cons);
		text.erase(0,1);
		std::cout << "\n   Want to continue ?\n" << "1 - YES\t0 - NO\n";
		q = intCheck(0, 1);
		if (q == 1)
		{
			system("cls");
		}
	}while (q == 1);
	return 0;
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
		if (!isIncorrect && (n < min || n > max))
		{
			isIncorrect = true;
			std::cout << "RANGE ERROR" << '\n';
		}
	} while (isIncorrect);
	return n;
}

std::string reform(std::string s,std::string text)
{
	for (int i = 0; i < s.length(); i++)
	{
		int value = s.length();
		if (s[i] == 'c')
		{
			if (i != value - 1 && (s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'y'))
			{
				text += s[i] + 's' - 'c';
			}
			else
			{
				text += s[i] + 'k' - 'c';
			}
		}
		else if (s[i] == 'C')
		{
			if (i != value - 1 && (s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'y'))
			{
				text += s[i] + 'S' - 'C';
			}
			else
			{
				text += s[i] + 'K' - 'C';
			}
		}
		else if (s[i] == 'q')
		{
			text += s[i] + 'k' - 'q';
			if (i != value - 1 && s[i + 1] == 'u')
			{
				text += s[i + 1] + 'v' - 'u';
				i++;
			}
		}
		else if (s[i] == 'Q')
		{
			text += s[i] + 'K' - 'Q';
			if (i != value - 1 && s[i + 1] == 'u')
			{
				text += s[i + 1] + 'v' - 'u';
				i++;
			}
		}
		else if (s[i] == 'x')
		{
			text += s[i] + 'k' - 'x';
			text += 's';
		}
		else if (s[i] == 'X')
		{
			text += s[i] + 'K' - 'X';
			text += 's';
		}
		else if (s[i] == 'w')
		{
			text += s[i] + 'v' - 'w';
		}
		else if (s[i] == 'W')
		{
			text += s[i] + 'V' - 'W';
		}
		else if ((i != value - 1) && (s[i] == 'p') && (s[i + 1] == 'h'))
		{
			text += s[i] + 'f' - 'p';
			i++;
		}
		else if ((i != value - 1) && (s[i] == 'P') && (s[i + 1] == 'h'))
		{
			text += s[i] + 'F' - 'P';
			i++;
		}
		else if ((i < value - 2) && (s[i] == 'y') && (s[i + 1] == 'o') && (s[i + 2] == 'u'))
		{
			text += s[i] + 'u' - 'y';
			i += 2;
		}
		else if ((i < value - 2) && (s[i] == 'Y') && (s[i + 1] == 'o') && (s[i + 2] == 'u'))
		{
			text += s[i] + 'U' - 'Y';
			i += 2;
		}
		else if ((i < value - 1) && (s[i] == 'o') && (s[i + 1] == 'o'))
		{
			text += s[i] + 'u' - 'o';
			i++;
		}
		else if ((i < value - 1) && (s[i] == 'O') && (s[i + 1] == 'o'))
		{
			text += s[i] + 'U' - 'O';
			i++;
		}
		else if ((i < value - 1) && (s[i] == 'E' || s[i] == 'e') && (s[i + 1] == 'e'))
		{
			text += s[i] + 'i' - 'e';
			i++;
		}
		else if ((i < value - 1) && (s[i] == 'E') && (s[i + 1] == 'e'))
		{
			text += s[i] + 'I' - 'E';
			i++;
		}
		else if ((i < value - 1) && (s[i] == 't') && (s[i + 1] == 'h'))
		{
			text += s[i] + 'z' - 't';
			i++;
		}
		else if ((i < value - 1) && (s[i] == 'T') && (s[i + 1] == 'h'))
		{
			text += s[i] + 'Z' - 'T';
			i++;
		}
		else
		{
			text += s[i];
		}
	}
	return text;
}

std::string result(std::string s, std::string text, std::string	cons)
{
	for (int i = 1; i < s.length(); i++)
	{
		if ((s[i] - s[i - 1] == 0 || s[i-1] - s[i] == 'L' - 'l') && count(begin(cons), end(cons), s[i]))
		{
		}
		else
		{
			text += s[i];
		}
	}
	return text;
}

void printInfo()
{
	std::cout << "Антихович Максим Викторович, группа 253505\n";
	std::cout << "\tЗадание 4\n";
	std::cout << "В консоль вводится текст на английском языке, без переносов слов. Длина строк не превышает 100 символов.\n";
	std::cout << "Необходимо вывести в консоль тот же текст, но уже соответствующий реформе. \n \n";
}