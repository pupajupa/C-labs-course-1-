#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printInfo();
	int size = 0;
	Train* trains = nullptr;
	menu(trains,size);
	return 0;
}