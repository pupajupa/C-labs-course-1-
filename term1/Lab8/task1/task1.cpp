#include "Header.h"
#include <iostream>
#include <string>
#include <Windows.h>
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printInfo();
	Race* races = nullptr;
	int size = 0;
	menu(races,size);
	return 0;
}