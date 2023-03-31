#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include "Header.h"


struct Train
{
	int departDate = 0; //дата выезда
	std::string destination; //пункт назначения
	int departh = 0;
	int departmin = 0;//время отправления
	int place = 0; //места
};

void initTrains(Train*& trains, int& size, int begin, int k) //1 ввод массива структур
{
	trains = new Train[size];
	for (int i = begin; i < size; i++)
	{
		printf("\n----Введите вашу %d-ю запись----\n", i + 1);
		printf("\nВведите дату выезда поезда \n:1 - Понедельник.\n:2 - Вторник.\n:3 - Среда.\n:4 - Четверг.\n:5 - Пятница.\n:6 - Суббота.\n:7 - Воскресенье.\n");
		printf("Дата выезда поезда: ");
		trains[i].departDate = intCheck(1, 7);
		if (intCheck(1, 2) == 1)
		{
			printf("Введите пункт назначения поезда: ");
			getline(std::cin, trains[i].destination);
		}
		else
		{
			break;
		}
		if (intCheck(1, 2) == 1)
		{
			printf("Введите время отправления поезда\nВведите часы: ");
			trains[i].departh = intCheck(0, 23);
			printf("Введите минуты: ");
			trains[i].departmin = intCheck(0, 59);
		}
		else
		{
			break;
		}
		if (intCheck(1, 2) == 1)
		{
			printf("Введите число свободных мест в поезде: ");
			trains[i].place = intCheck(0, 500);
		}
		else
		{
			break;
		}
	}
}

Train* levelUp(Train* arr, int sz, int size)
{
	Train* arr2 = new Train[sz];
	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}
	delete[] arr;
	return arr2;
}

void appendixTrains(Train*& trains, int& size)//3 дополнение массива структур
{
	if (size == 0)
	{
		printf("Вначале инициализируйте файл!");
	}
	else
	{
		printf("\nВведите количество структур, которое вы хотите добавить: ");
		int secondSize = intCheck(1, 15);
		secondSize = secondSize + size;
		trains = levelUp(trains, secondSize, size);
		initTrains(trains, secondSize, size, 1);
		size = secondSize;
	}
}

//std::string inputFilePath() {
//	bool isIncorrect;
//	std::string filePath;
//	do {
//		std::cout << "Введите путь к файлу и его название.\n";
//		isIncorrect = false;
//		std::ifstream inpFile("Input.txt", std::ios::in);
//		if (!inpFile.is_open()) {
//			std::cout << "Ошибка ввода имени файла.\n";
//			isIncorrect = true;
//		}
//		inpFile.close();
//	} while (isIncorrect);
//	return filePath;
//}

Train* inputFromFile(int& n)
{
	bool isIncorrect;
	Train* trains;
	std::ifstream inpFile;
	int k = 0;
	do {
		isIncorrect = false;
		inpFile.open("Input.txt");
		inpFile >> n;
		if (inpFile.fail() || (n < 1) || (n > 15)) {
			std::cout << "Ошибка ввода. Проверьте файл на правильность введённого количества записей! (1 <= N <= 15)";
			isIncorrect = true;
		}
		else
		{
			k++;
		}
		Train* tmp = new Train[n];
		if (!isIncorrect) {
			for (int i = 0; i < n; i++) {
				;
				inpFile >> tmp[i].departDate;
				if (inpFile.fail() || (tmp[i].departDate < 1) || (tmp[i].departDate > 7))
				{
					std::cout << "Ошибка ввода. Проверьте файл на правильность введённой даты! (1 <= N <= 7)";
					isIncorrect = false;
					break;
				}
				else
				{
					k++;
				}
				inpFile >> tmp[i].destination;
				inpFile >> tmp[i].departh;
				if (!isIncorrect && inpFile.fail() || (tmp[i].departh < 0) || (tmp[i].departh > 23))
				{
					std::cout << "Ошибка ввода. Проверьте файл на правильность введённых часов отправления! (0 <= N <= 23)";
					isIncorrect = false;
					break;
				}
				else
				{
					k++;
				}
				inpFile >> tmp[i].departmin;
				if (!isIncorrect && inpFile.fail() || (tmp[i].departmin < 0) || (tmp[i].departmin > 59))
				{
					std::cout << "Ошибка ввода. Проверьте файл на правильность введённых мниут отправления! (0 <= N <= 59)";
					isIncorrect = false;
					break;
				}
				else
				{
					k++;
				}
				inpFile >> tmp[i].place;
				if (!isIncorrect && inpFile.fail() || (tmp[i].place < 0) || (tmp[i].place > 500))
				{
					std::cout << "Ошибка ввода. Проверьте файл на корректность данных! (0 <= N <= 500)";
					isIncorrect = false;
					break;
				}
				else
				{
					k++;
				}
			}
		}
		trains = tmp;
		inpFile.close();
	} while (isIncorrect);
	int countK = n * 4 + 1;
	if (k == countK)
	{
		std::cout << "Файл успешно инициализирован!";
	}
	return trains;
}

void changeElems(Train*& trains, int size)
{
	if (size == 0)
	{
		printf("Вначале инициализируйте файл!");
	}
	else
	{
		printf("Введите номер записи: ");
		int numberOfStruct = intCheck(1, size) - 1;//номер структуры
		if (intCheck(1, 2) == 1)
		{
			printf("Введите номер параметра\n:1 - Дата выезда поезда.\n:2 - Пункт назначения.\n:3 - Время отправления поезда.\n:4 - Количество свободных мест в поезде.\n:0 - Выход.");
			printf("\nВаш выбор: ");
			int param = intCheck(0, 4);//номер параметра
			switch (param)
			{
			case 0:
			{
				break;
			}
			case 1:
			{
				printf("Введите дату выезда поезда: ");
				trains[numberOfStruct].departDate = intCheck(1, 7);
				printf("\nВаш параметр успешно изменён\n\n");
				if (intCheck(1, 2) == 1)
				{
					changeElems(trains, size);
				}
				break;
			}
			case 2:
			{
				printf("Введите пункт назначения поезда: ");
				getline(std::cin, trains[numberOfStruct].destination);
				printf("\nВаш параметр успешно изменён\n\n");
				if (intCheck(1, 2) == 1)
				{
					changeElems(trains, size);
				}
				break;
			}
			case 3:
			{
				printf("Введите пункт назначения: ");
				getline(std::cin, trains[numberOfStruct].destination);
				printf("\nВаш параметр успешно изменён\n\n");
				if (intCheck(1, 2) == 1)
				{
					changeElems(trains, size);
				}
				break;
			}
			case 4:
			{
				printf("Введите количество свободных мест в поезде: ");
				trains[numberOfStruct].place = intCheck(0, 500);
				printf("\nВаш параметр успешно изменён\n\n");
				if (intCheck(1, 2) == 1)
				{
					changeElems(trains, size);
				}
				break;
			}
			default:
				std::cout << "\nОшибка ввода!\n";
				break;
			}
		}
	}
}

void deleteElems(Train*& trains, int size)
{
	if (size == 0)
	{
		printf("Вначале инициализируйте файл!");
	}
	else
	{
		printf("Введите номер записи: ");
		int numberOfStruct = intCheck(1, size) - 1;//номер структуры
		if (intCheck(1, 2) == 1)
		{
			printf("Введите номер параметра\n:1 - Дата выезда поезда.\n:2 - Пункт назначения.\n:3 - Время отправления поезда.\n:4 - Количество свободных мест в поезде.\n:0 - Выход.");
			printf("\nВаш выбор: ");
			int param = intCheck(0, 4);//номер параметра
			switch (param)
			{
			case 0:
			{
				break;
			}
			case 1://удаление
			{
				trains[numberOfStruct].departDate = 0;
				printf("\nВаш параметр успешно удалён\n\n");
				if (intCheck(1, 2) == 1)
				{
					deleteElems(trains, size);
				}
				break;
			}
			case 2:
			{
				trains[numberOfStruct].destination = '-';
				printf("\nВаш параметр успешно удалён\n\n");
				if (intCheck(1, 2) == 1)
				{
					deleteElems(trains, size);
				}
				break;
			}
			case 3:
			{
				trains[numberOfStruct].departh = 0;
				trains[numberOfStruct].departmin = 0;
				printf("\nВаш параметр успешно удалён\n\n");
				if (intCheck(1, 2) == 1)
				{
					deleteElems(trains, size);
				}
				break;
			}
			case 4:
			{
				trains[numberOfStruct].place = 0;
				printf("\nВаш параметр успешно удалён\n\n");
				if (intCheck(1, 2) == 1)
				{
					deleteElems(trains, size);
				}
				break;
			}
			default:
				std::cout << "\nОшибка ввода!\n";
				break;
			}
		}
	}
}

void outputInFile(Train* trains, int n) {
	std::string saveFile;
	std::ofstream otpFile;
	otpFile.open("Output.txt", std::ios::out);
	otpFile << n << '\n';
	for (int i = 0; i < n; i++) {
		otpFile << trains[i].departDate << ' ';
		otpFile << trains[i].destination << ' ';
		otpFile << trains[i].departh << ' ';
		otpFile << trains[i].departmin << ' ';
		otpFile << trains[i].place << '\n';
	}
	otpFile.close();
}

void printTrains(Train* trains, int size, int begin)//2 вывод массива структур
{
	if (size == 0)
	{
		printf("Вначале инициализируйте файл!");
	}
	else
	{
		for (int i = begin; i < size; i++)
		{
			printf("\nЗапись (%d)\n", i + 1);
			printf("\nВаша дата выезда рейса(день): %d", trains[i].departDate);
			printf("\nВаш пункт назначения: ");
			std::cout << trains[i].destination;
			if ((trains[i].departh) < 10 && (trains[i].departmin) < 10)
			{
				printf("\nВремя отправления вашего автобуса: 0%d:0%d", trains[i].departh, trains[i].departmin);
			}
			else if (trains[i].departh < 10 && trains[i].departmin > 10)
			{
				printf("\nВремя отправления вашего автобуса: 0%d:%d", trains[i].departh, trains[i].departmin);
			}
			else if (trains[i].departh > 10 && trains[i].departmin < 10)
			{
				printf("\nВремя отправления вашего автобуса: %d:0%d", trains[i].departh, trains[i].departmin);
			}
			else
			{
				printf("\nВремя отправления вашего автобуса: %d:%d", trains[i].departh, trains[i].departmin);
			}
			printf("\nВаше число свободных мест в поезде: %d", trains[i].place);
			printf("\n");
		}
	}
}

void searchElements(Train* trains, int size)
{
	if (size == 0)
	{
		printf("Вначале инициализируйте файл!");
	}
	else
	{
		int localChoice = 0;
		do {
			printf("Выберите параметр по которому хотите искать:\n");
			printf("0 - Выйти из поиска.\n");
			printf("1 - Дата выезда поезда.\n");
			printf("2 - Пункт назначения.\n");
			printf("3 - Время прибытия.\n");
			printf("4 - Количество свободных мест в поезде.\n\n");
			int choice = 0;
			bool IsCorrect;
			do {
				std::cout << "\nВаш выбор: ";
				IsCorrect = true;
				std::cin >> choice;
				if (std::cin.fail()) {
					std::cin.clear();
					while (std::cin.get() != '\n');
					IsCorrect = false;
					std::cout << "Неправильно выбранный тип данных (входящий параметр должен быть целым числом)" << std::endl;
				}
				if (!IsCorrect && std::cin.get() != '\n') {
					std::cin.clear();
					while (std::cin.get() != '\n');

					std::cout << "Ошибка ввода, введите число от 0 до 4" << std::endl;
					IsCorrect = false;
				}
				if (!IsCorrect && (choice < 0 || choice>4)) {
					IsCorrect = false;
					std::cout << "Неверно выбранный пункт(Выберите число от 0 до 4)" << std::endl;
				}
				std::cin.ignore();
			} while (!IsCorrect);
			bool exists = false;
			switch (choice)
			{
			case 0:
			{
				printf("\nВы вышли из поиска.\n");
				break;
			}
			case 1:
			{
				printf("\nВы выбрали поиск дате выезда поезда.\n");
				printf("Введите дату: ");
				printf("Введите номер параметра\n:1 - Понедельник.\n:2 - Вторник.\n:3 - Среда.\n:4 - Четверг.\n:5 - Пятница.\n:6 - Суббота.\n:7 - Воскресенье.\n");
				int dayNum = intCheck(1, 7);
				for (int i = 0; i < size; i++)
				{
					if (trains[i].departDate == dayNum)
					{
						printf("\nЗапись найдена!");
						printf("Номер записи: %d", i + 1);
						printf("\nВаша струтура: \n");
						printTrains(trains, i + 1, i);
						printf("\n");
						exists = true;
						break;
					}
				}
				break;
			}
			case 2:
			{
				printf("\nВы выбрали поиск по пунтку назначения.\n");
				printf("Введите пункт назначения: ");
				char pointDestination[100];
				std::cin.getline(pointDestination, 100);
				for (int i = 0; i < size; i++)
				{
					if (trains[i].destination == pointDestination)
					{
						printf("\nЗапись найдена!");
						printf("\nНомер записи: %d", i + 1);
						printf("\nВаша струтура: \n");
						printTrains(trains, i + 1, i);
						printf("\n");
						exists = true;
						break;
					}
				}
				break;
			}
			case 3:
			{
				printf("\nВы выбрали поиск по времени отправления.\n");
				printf("Введите время отправления поезда\nВведите часы: ");
				int hours = intCheck(0, 24);
				printf("Введите минуты: ");
				int min = intCheck(0, 59);
				for (int i = 0; i < size; ++i) {
					if ((trains[i].departh == hours) && (trains[i].departmin == min))
					{
						printf("\nЗапись найдена!");
						printf("\nНомер записи: %d", i + 1);
						printf("\nВаша струтура: \n");
						printTrains(trains, i + 1, i);
						printf("\n");
						exists = true;
						break;
					}
				}
				break;
			}
			case 4:
			{
				printf("\nВы выбрали поиск по количеству свободных мест в поезде.\n");
				printf("Введите количество свободных мест: ");
				int count = intCheck(0, 500);
				for (int i = 0; i < size; ++i)
				{
					if (trains[i].place == count)
					{
						printf("\nЗапись найдена!");
						printf("\nНомер записи: %d", i + 1);
						printf("\nВаша струтура: \n");
						printTrains(trains, i + 1, i);
						printf("\n");
						exists = true;
						break;
					}
				}
				break;
			}
			default:
				break;
			}
			if (!exists)
			{
				std::cout << "\nЗаписи с таким параметром нет.";
			}
			std::cout << "\nВы хотите продолжить поиск? (1 - Да\t2 - Нет)";
			int localIsCorrect;
			do {
				std::cout << "\nВаш выбор: ";
				IsCorrect = true;
				std::cin >> localIsCorrect;
				if (std::cin.fail()) {
					std::cin.clear();
					while (std::cin.get() != '\n');
					IsCorrect = false;
					std::cout << "Неправильно выбранный тип данных (входящий параметр должен быть целым числом)" << std::endl;
				}
				if (!IsCorrect && std::cin.get() != '\n') {
					std::cin.clear();
					while (std::cin.get() != '\n');

					std::cout << "Ошибка ввода, введите число 1 или 2" << std::endl;
					IsCorrect = false;
				}
				if (!IsCorrect && (localIsCorrect < 1 || localChoice>2)) {
					IsCorrect = false;
					std::cout << "Неверно выбранный пункт(Выберите число от 1 до 2)" << std::endl;
				}
				std::cin.ignore();
			} while (!IsCorrect);
			if (localIsCorrect == 2)
			{
				printf("\nВы успешно завершили поиск.\n");
				break;
			}
		} while (localChoice != 0);
	}
}

void result(Train* trains, Train res, int size, int a)
{
	if (size == 0)
	{
		printf("Вначале инициализируйте файл!");
	}
	else
	{
		res = initRes(res);
		for (int i = 0; i < size; i++)
		{
			if (isOk(trains[i], res))
			{
				printf("\n==========================================");
				printf("\nРейс: %d", i + 1);
				a = 1;
				if ((trains[i].departh) < 10 && (trains[i].departmin) < 10)
				{
					printf("\nВремя отправления: 0%d:0%d", trains[i].departh, trains[i].departmin);
				}
				else if (trains[i].departh < 10 && trains[i].departmin > 10)
				{
					printf("\nВремя отправления: 0%d:%d", trains[i].departh, trains[i].departmin);
				}
				else if (trains[i].departh > 10 && trains[i].departmin < 10)
				{
					printf("\nВремя отправления: %d:0%d", trains[i].departh, trains[i].departmin);
				}
				else
				{
					printf("\nВремя отправления: %d:%d", trains[i].departh, trains[i].departmin);
				}
			}
		}
		if (a == 0)
		{
			printf("\n==========================================");
			printf("\nНевозможно выполнить заказ в полном объеме");
		}
	}
}

int menu(Train*& trains, int& size)
{
	printf("\n==========================================\n");
	printf("\n\tФункции:");
	printf("\n0 - Выход из программы.");
	printf("\n1 - Инициализация данных файла.");
	printf("\n2 - Просмотр записей файла.");
	printf("\n3 - Поиск и вывод записей с заданным параметром");
	printf("\n4 - Дополнение уже существующего файла новыми записями.");
	printf("\n5 - Удаление элемента записи с заданным значением элемента.");
	printf("\n6 - Изменение элемента записи с заданным значением элемента.");
	printf("\n7 - Выполнение заказа.");
	int choice;
	int begin = 0;
	Train res;
	bool IsCorrect;
	do {
		std::cout << "\nВаш выбор: ";
		IsCorrect = true;
		std::cin >> choice;
		if (std::cin.fail())
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			IsCorrect = false;
			std::cout << "Неправильно выбранный тип данных (входящий параметр должен быть целым числом)" << std::endl;
		}
		if (!IsCorrect && std::cin.get() != '\n')
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "Ошибка ввода, введите число от 0 до 7" << std::endl;
			IsCorrect = false;
		}
		if (!IsCorrect && (choice < 0 || choice>7))
		{
			IsCorrect = false;
			std::cout << "Ошибка ввода, введите число от 0 до 7" << std::endl;
		}
		std::cin.ignore();
	} while (!IsCorrect);

	switch (choice)
	{
	case 0:
	{
		outputInFile(trains, size);
		std::cout << "\n==========================================\n";
		std::cout << "\n----Вы вышли из программы, хорошего дня!----\n";
		delete[] trains;
		return 0;
	}
	case 1:
	{
		std::cout << "\n==========================================\n";
		trains = inputFromFile(size);
		break;
	}
	case 2:
	{
		std::cout << "\n==========================================\n";
		printTrains(trains, size, 0);
		break;
	}
	case 3:
	{
		std::cout << "\n==========================================\n";
		searchElements(trains, size);
		break;
	}
	case 4:
	{
		std::cout << "\n==========================================\n";
		appendixTrains(trains, size);
		break;
	}
	case 5:
	{
		std::cout << "\n==========================================\n";
		deleteElems(trains, size);
		break;
	}
	case 6:
	{
		std::cout << "\n==========================================\n";
		changeElems(trains, size);
		break;
	}
	case 7:
	{
		std::cout << "\n==========================================\n";
		result(trains, res, size, 0);
		break;
	}
	default:
		std::cout << "\nОшибка ввода!\n";
		break;
	}
	menu(trains, size);
	return 0;
}

Train initRes(Train res)
{
	printf("\nВведите дату выезда поезда \n:1 - Понедельник.\n:2 - Вторник.\n:3 - Среда.\n:4 - Четверг.\n:5 - Пятница.\n:6 - Суббота.\n:7 - Воскресенье.\n");
	printf("Дата выезда поезда: ");
	res.departDate = intCheck(1, 7);
	printf("Введите пункт назначения поезда: ");
	getline(std::cin, res.destination);
	printf("Введите время отправления поезда\nВведите часы: ");
	res.departh = intCheck(0, 23);
	printf("Введите минуты: ");
	res.departmin = intCheck(0, 59);
	printf("Введите число свободных мест в поезде: ");
	res.place = intCheck(0, 500);
	return res;
}

bool isOk(Train trains, Train res)
{
	int countTrainsTime = (trains.departh * 60) + trains.departmin;
	int countResTime = (res.departh * 60) + res.departmin;
	return (res.departDate == trains.departDate && res.destination == trains.destination && res.place <= trains.place && countResTime >= countTrainsTime);
}