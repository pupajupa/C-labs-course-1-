#include <iostream>
#include <string>

using namespace std;

void printInfo();
string sum(string, string, int);
string sub(string, string, int);
int intCheck();
bool repeat();

int main()
{
	setlocale(LC_ALL, "Russian");
	do{
		printInfo();
		char s[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int numSystem = 0, systemsNum = 0;
		string baseNum;
		bool right = false; 
		bool left = false;
		cout << "   Введите основание системы счисления: \n";
		cin >> baseNum;
		systemsNum = baseNum.size() - 1;
		for (int i = 0; i < baseNum.size(); i++) { //o(n)
			numSystem += (baseNum[i] - '0') * pow(10, systemsNum--);
			if (baseNum[i] < '0' || baseNum[i] > '9' || systemsNum > 1 || numSystem > 36) {
				cout << "WRONG INPUT";
				cout << "\nEnter...";
				cin.ignore(1024, '\n');
				while (cin.get() != '\n');
				system("cls");
				main();
			}

		}
		string a;
		string b;
		int negative = 0;
		cout << "   Введите число а в " << numSystem << "-й системе счисления: \n";
		cin >> a;
		cout << "   Введите число b в " << numSystem << "-й системе счисления: \n";
		cin >> b;
		if (a[0] == '-') {
			right = !right;
			negative++;
			a.erase(a.begin(), a.begin() + 1);
		}
		if (b[0] == '-') {
			left = !left;
			negative++;
			b.erase(b.begin(), b.begin() + 1);
		}
		while (a.size() != b.size()) {
			if (a.size() > b.size())
				b = "0" + b;
			else
				a = "0" + a;
		}
		if (negative == 0)
		{
			cout << "   Sum: \n" << sum(a, b, numSystem) << "\n";
			cout << "\n   Sub: \n" << sub(a, b, numSystem) << "\n";
		}
		else if (negative == 1)
		{
			if (left)
			{ 
				cout << "   Sum: \n" << sub(a, b, numSystem) << "\n";
				cout << "\n   Sub: \n" << sum(a, b, numSystem) << "\n";
			}
			else
			{
				cout << "   Sum: \n" << sub(b, a, numSystem) << "\n";
				cout << "\n   Sub: \n-" << sum(a, b, numSystem) << "\n";
			}
		}
		else if (negative == 2)
		{
			cout << "   Sum: \n-" << sum(a, b, numSystem) << "\n";
			cout << "\n   Sub: \n" << sub(b, a, numSystem) << "\n";
		}
		else
			break;
	} while (repeat());
	return 0;
}

inline void printInfo()
{
	std::cout << "Антихович Максим Викторович, группа 253505" << std::endl;
	std::cout << "Задание 3" << std::endl;
	std::cout << "Вариант 4" << std::endl << std::endl;
	std::cout << "Пользователь вводит основание системы счисления." << std::endl;
	std::cout << "Осуществить сложение и вычитание чисел в заданной системе счисления." << std::endl << std::endl;
}

string sum(string a, string b, int numSystem) 
{
	string f;
	char s[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int remainder = 0;

	for (int i = a.size() - 1; i >= 0; i--) {	//o(n)
		int ai = 0, bi = 0;
		if (a[i] < '9' + 1)
			ai = a[i] - '0';
		else
			ai = 10 + a[i] - 'A';
		if (b[i] < '9' + 1)
			bi = b[i] - '0';
		else
			bi = 10 + b[i] - 'A';
		int n = ai + bi + remainder;
		if (remainder != 0) remainder--;
		if (n > numSystem - 1) {
			f += s[n - numSystem];
			remainder++;
		}
		else
			remainder > 0 ? f += s[n] + remainder-- : f += s[n];

	}
	if (remainder > 0)
		f += to_string(remainder);
	string ss;
	for (int i = f.size() - 1; i >= 0; i--) {   //o(n)
		ss += f[i];
	}
	return ss;
}

string sub(string a, string b, int numSystem) 
{
	string f;
	char s[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int remainder = 0; bool fs = false;
	string max, min;
	max = a; min = b;
	for (int i = 0; i < a.size(); i++) {    //o(n)
		int ai = 0, bi = 0;
		if (a[i] < '9' + 1)
			ai = a[i] - '0';
		else
			ai = 10 + a[i] - 'A';
		if (b[i] < '9' + 1)
			bi = b[i] - '0';
		else
			bi = 10 + b[i] - 'A';
		if (a[i] > b[i]) {
			max = a;
			min = b;
			break;
		}
		else if (a[i] < b[i]) {
			max = b; fs = true;
			min = a;
			break;
		}
	}

	for (int i = a.size() - 1; i >= 0; i--) {   //o(n)
		int ai = 0, bi = 0;
		if (max[i] < '9' + 1)
			ai = max[i] - '0';
		else
			ai = 10 + max[i] - 'A';
		if (min[i] < '9' + 1)
			bi = min[i] - '0';
		else
			bi = 10 + min[i] - 'A';
		int n = ai - bi + remainder;
		if (remainder < 0) remainder++;
		if (n < 0) {
			f += s[numSystem + n];
			if (remainder == 0) remainder--;
			//else remainder++;
		}
		else
			remainder < 0 ? f += s[n] + remainder++ : f += s[n];
	}
	string ss;
	for (int i = f.size() - 1; i >= 0; i--) {     //o(n)
		ss += f[i];
	}
	int y = 0;
	while (ss.size() != 1)       //o(n)    s
	{
		if (ss[0] != '0')
			break;
		else
			ss.erase(ss.begin(), ss.begin() + 1);
	}
	if (fs) ss = '-' + ss;
	return ss;
}

int intCheck()
{
	int x;
	while (scanf_s("%d", &x) != 1 || x < 0 || x > 1 || getchar() != '\n')    //O(n)
	{
		printf("Error\n");
		rewind(stdin);
	}
	return x;
}

bool repeat()
{
	std::cout << "\n   Хотите продолжить ?\n" << "1 - Да\t0 - Нет\n";
	int q = intCheck();
	if (q == 1)
	{
		system("cls");
		return true;
	}
}