#include <iostream>
#include <string>
#include "Header.h"

struct Race
{
	int numberBus = 0;
	std::string typeBus, destination;
	int departh = 0;
	int departmin = 0;//время отправления
	int arriveh = 0;
	int arrivemin = 0;//время прибытия
};

void initRaces(Race*& races, int& size, int begin, int k) //1 ввод массива структур
{
	if (k == 0)
	{
		races = new Race[size];
	}
	for (int i = begin; i < size; i++)
	{
		printf("\n----Введите вашу %d-ю запись----\n", i + 1);
		printf("\nВведите номер рейса автобуса: ");
		races[i].numberBus = intCheck(0, 1000);

		if (intCheck(1, 2) == 1)
		{
			printf("Введите тип автобуса: ");
			getline(std::cin, races[i].typeBus);
		}
		else
		{
			break;
		}
		if (intCheck(1, 2) == 1)
		{
			printf("Введите пункт назначения: ");
			getline(std::cin, races[i].destination);
		}
		else
		{
			break;
		}
		if (intCheck(1, 2) == 1)
		{
			printf("Введите время отправления автобуса\nВведите часы: ");
			races[i].departh = intCheck(0, 23);
			printf("Введите минуты: ");
			races[i].departmin = intCheck(0, 59);
		}
		else
		{
			break;
		}
		if (intCheck(1, 2) == 1)
		{
			printf("Введите время прибытия автобуса:\nВведите часы: ");
			races[i].arriveh = intCheck(0, 23);
			printf("Введите минуты: ");
			races[i].arrivemin = intCheck(0, 59);
		}
		else
		{
			break;
		}
	}
	k++;
}

void printRaces(Race* races, int size, int begin)//2 вывод массива структур
{
	if (size == 0)
	{
		printf("\nNo struct.\n");
	}
	else
	{
		for (int i = begin; i < size; i++)
		{
			printf("\nЗапись (%d)\n", i + 1);
			printf("\nВаш номер рейса: %d", races[i].numberBus);
			printf("\nВаш тип автобуса: ");
			std::cout << races[i].typeBus;
			printf("\nВаш пункт назначения: ");
			std::cout << races[i].destination;
			if ((races[i].departh) < 10 && (races[i].departmin) < 10)
			{
				printf("\nВремя отправления вашего автобуса: 0%d:0%d", races[i].departh, races[i].departmin);
			}
			else if (races[i].departh < 10 && races[i].departmin > 10)
			{
				printf("\nВремя отправления вашего автобуса: 0%d:%d", races[i].departh, races[i].departmin);
			}
			else if (races[i].departh > 10 && races[i].departmin < 10)
			{
				printf("\nВремя отправления вашего автобуса: %d:0%d", races[i].departh, races[i].departmin);
			}
			else
			{
				printf("\nВремя отправления вашего автобуса: %d:%d", races[i].departh, races[i].departmin);
			}
			if ((races[i].arriveh < 10) && (races[i].arrivemin) < 10)
			{
				printf("\nВремя прибытия вашего автобуса: 0%d:0%d", races[i].arriveh, races[i].arrivemin);
			}
			else if (races[i].arriveh < 10 && races[i].arrivemin > 10)
			{
				printf("\nВремя прибытия вашего автобуса: 0%d:%d", races[i].arriveh, races[i].arrivemin);
			}
			else if (races[i].arriveh > 10 && races[i].arrivemin < 10)
			{
				printf("\nВремя прибытия вашего автобуса: %d:0%d", races[i].arriveh, races[i].arrivemin);
			}
			else
			{
				printf("\nВремя прибытия вашего автобуса: %d:%d", races[i].arriveh, races[i].arrivemin);
			}
			printf("\n");
			int countDepartHours = races[i].departh;
			int countDepartMin = races[i].departmin;
			int countArriveHours = races[i].arriveh;
			int countArriveMin = races[i].arrivemin;
			countDepartMin += countDepartHours * 60;
			countArriveMin += countArriveHours * 60;
			int dm, dh;
			dm = countArriveMin - countDepartMin;//разница в минутах
			if (dm <= 0)
			{
				dm += 1440;
			}
			dh = dm / 60; //разница в часах 
			dm %= 60;
			if ((dh < 10) && (dm < 10))
			{
				printf("Время в пути вашего автобуса: 0%d:0%d", dh, dm);
			}
			else if (dh < 10 && dm > 10)
			{
				printf("Время в пути вашего автобуса: 0%d:%d", dh, dm);
			}
			else if (dh > 10 && dm < 10)
			{
				printf("Время в пути вашего автобуса: %d:0%d", dh, dm);
			}
			else
			{
				printf("Время в пути вашего автобуса: %d:%d", dh, dm);
			}
		}
	}
}

Race* levelUp(Race* arr, int sz, int size)
{
	Race* arr2 = new Race[sz];
	for (int i = 0; i < size; i++) {
		arr2[i] = arr[i];
	}
	delete[] arr;
	return arr2;
}

void appendixRaces(Race*& races, int& size)//3 дополнение массива структур
{
	if (size == 0)
	{
		printf("Вначале инициализируйте структуру!");
	}
	else
	{
		printf("\nВведите количество структур, которое вы хотите добавить: ");
		int secondSize = intCheck(1, 20);
		secondSize = secondSize + size;
		races = levelUp(races, secondSize, size);
		initRaces(races, secondSize, size, 1);
		size = secondSize;
	}
}

void searchElements(Race* races, int size)
{
	if (size == 0)
	{
		printf("Вначале инициализируйте структуру!");
	}
	else
	{
		int localChoice = 0;
		do {
			printf("\nВыберите параметр по которому хотите искать:\n");
			printf("0 - Выйти из поиска.\n");
			printf("1 - Номер рейса.\n");
			printf("2 - Тип автобуса.\n");
			printf("3 - Пункт назначения.\n");
			printf("4 - Время отправления.\n");
			printf("5 - Время прибытия.\n\n");
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

					std::cout << "Ошибка ввода, введите число от 0 до 5" << std::endl;
					IsCorrect = false;
				}
				if (!IsCorrect && (choice < 0 || choice>5)) {
					IsCorrect = false;
					std::cout << "Неверно выбранный пункт(Выберите число от 0 до 5)" << std::endl;
				}
				std::cin.ignore();
			} while (!IsCorrect);


			bool exists = false;
			switch (choice)
			{
			case 0:
			{
				printf("\nВы вышли из поиска.\n\n\n");
				break;
			}
			case 1:
			{
				printf("\nВы выбрали поиск по номеру рейса.\n");
				printf("Введите номер рейса: ");
				char numRaces = intCheck(0, 1000);
				for (int i = 0; i < size; i++)
				{
					if (races[i].numberBus == numRaces)
					{
						printf("\nЗапись найдена!");
						printf("Номер записи: %d", i + 1);
						printf("\nВаша струтура: \n");
						printRaces(races, i + 1, i);
						printf("\n");
						exists = true;
						break;
					}
				}
				break;
			}
			case 2:
			{
				printf("\nВы выбрали поиск по количеству типу автобуса.\n");
				printf("Введите тип автобуса: ");
				char typesBusSearch[100];
				std::cin.getline(typesBusSearch, 100);
				for (int i = 0; i < size; ++i)
				{
					if (races[i].typeBus == typesBusSearch)
					{
						printf("\nЗапись найдена!");
						printf("Номер записи: %d", i + 1);
						printf("\nВаша струтура: \n");
						printRaces(races, i + 1, i);
						printf("\n");
						exists = true;

						break;
					}
				}
				break;
			}
			case 3:
			{
				printf("\nВы выбрали поиск по пунтку назначения.\n");
				printf("Введите пункт назначения: ");
				char pointDestination[100];
				std::cin.getline(pointDestination, 100);
				for (int i = 0; i < size; i++)
				{
					if (races[i].destination == pointDestination)
					{
						printf("\nЗапись найдена!");
						printf("Номер записи: %d", i + 1);
						printf("\nВаша струтура: \n");
						printRaces(races, i + 1, i);
						printf("\n");
						exists = true;
						break;
					}
				}
				break;
			}
			case 4:
			{
				printf("\nВы выбрали поиск по времени отправления.\n");
				printf("Введите время отправления автобуса\nВведите часы: ");
				int hours = intCheck(0, 24);
				printf("Введите минуты: ");
				int min = intCheck(0, 59);
				for (int i = 0; i < size; ++i) {
					if ((races[i].departh == hours) && (races[i].departmin == min))
					{
						printf("\nЗапись найдена!");
						printf("Номер записи: %d", i + 1);
						printf("\nВаша струтура: \n");
						printRaces(races, i + 1, i);
						printf("\n");
						exists = true;
						break;
					}
				}
				break;
			}
			case 5:
			{
				printf("\nВы выбрали поиск по времени отправления.\n");
				printf("Введите время отправления автобуса\nВведите часы: ");
				int hours = intCheck(0, 24);
				printf("Введите минуты: ");
				int min = intCheck(0, 59);
				for (int i = 0; i < size; ++i) {
					if ((races[i].arriveh == hours) && (races[i].arrivemin == min))
					{
						printf("\nЗапись найдена!");
						printf("\nНомер записи: %d", i + 1);
						printf("\nВаша струтура: \n");
						printRaces(races, i + 1, i);
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

void changeElems(Race*& races, int size) 
{
	if (size == 0)
	{
		printf("Вначале инициализируйте структуру!");
	}
	else
	{
		printf("\nВы хотите удалить данные или изменить? (1 - удалить\t2 - изменить)\nВаш выбор: ");
		int choice = intCheck(1, 3);//1-удалить 2-изменить
		if (intCheck(1, 2) == 1)
		{
			printf("Введите номер записи: ");
			int numberOfStruct = intCheck(1, size) - 1;//номер структуры
			if (intCheck(1, 2) == 1)
			{
				printf("Введите номер параметра\n:1 - Номер рейса автобуса.\n:2 - Тип автобуса.\n:3 - Пункт назначения.\n:4 - Время отправления автобуса.\n:5 - Время прибытия автобуса.\n:0 - Выход.");
				printf("\nВаш выбор: ");
				int param = intCheck(0, 5);//номер параметра
				switch (choice)
				{
				case 1:
				{
					switch (param)
					{
					case 0:
					{
						break;
					}
					case 1://удаление
					{
						races[numberOfStruct].numberBus = 0;
						printf("\nВаш параметр успешно удалён\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 2:
					{
						races[numberOfStruct].typeBus = '-';
						printf("\nВаш параметр успешно удалён\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 3:
					{
						races[numberOfStruct].destination = '-';
						printf("\nВаш параметр успешно удалён\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 4:
					{
						races[numberOfStruct].departh = 0;
						races[numberOfStruct].departmin = 0;
						printf("\nВаш параметр успешно удалён\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 5:
					{
						races[numberOfStruct].arriveh = 0;
						races[numberOfStruct].arrivemin = 0;
						printf("\nВаш параметр успешно удалён\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					default:
						std::cout << "\nОшибка ввода!\n";
						menu(races, size);
						break;
					}
					break;
				}
				case 2://изменение
				{
					switch (param)
					{
					case 0:
					{
						break;
					}
					case 1:
					{
						printf("Введите номер рейса автобуса: ");
						races[numberOfStruct].numberBus = intCheck(0, 1000);
						printf("\nВаш параметр успешно изменён\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 2:
					{
						printf("Введите тип автобуса: ");
						getline(std::cin, races[numberOfStruct].typeBus);
						printf("\nВаш параметр успешно изменён\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 3:
					{
						printf("Введите пункт назначения: ");
						getline(std::cin, races[numberOfStruct].destination);
						printf("\nВаш параметр успешно изменён\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 4:
					{
						printf("Введите время отправления автобуса\nВведите часы: ");
						races[numberOfStruct].departh = intCheck(0, 24);
						printf("Введите минуты: ");
						races[numberOfStruct].departmin = intCheck(0, 59);
						printf("\nВаш параметр успешно изменён\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 5:
					{
						printf("Введите время прибытия автобуса:\nВведите часы: ");
						races[numberOfStruct].arriveh = intCheck(0, 24);
						printf("Введите минуты: ");
						races[numberOfStruct].arrivemin = intCheck(0, 59);
						printf("\nВаш параметр успешно изменён\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					default:
						std::cout << "\nОшибка ввода!\n";
						break;
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
}

void SelectionSort(Race*& races, int size, int h, int min)
{
	int max = size;
	int isFind = -1;
	for (int i = 0; i < size; i++)
	{
		int max_i = i;
		for (int j = i; j < size; j++)
		{
			if (races[j].arriveh > races[max_i].arriveh)
			{
				max_i = j;
			}
			else if ((races[j].arriveh == races[max_i].arriveh) && (races[j].arrivemin > races[max_i].arrivemin)) {
				max_i = j;
			}
		}
		std::swap(races[i], races[max_i]);
	}
	for (int i = 0; i < size; i++)
	{
		if (races[i].arriveh < h)
		{
			size = i;
			break;
		}
		else if ((races[i].arriveh == h) && (races[i].arrivemin < min))
		{
			size = i;
			break;
		}
	}
	printRaces(races, max, 0);
	std::cout << "\n=======================\n";
}

int menu(Race*& races, int& size)
{
	printf("\n==========================================\n");
	printf("\n\tФункции:");
	printf("\n0 - Выход из программы.");
	printf("\n1 - Формирование динамического одномерного массива структур, значения которых вводятся с клавиатуры.");
	printf("\n2 - Просмотр содержимого динамического массива структур.");
	printf("\n3 - Дополнение уже существующего массива структур новыми структурами.");
	printf("\n4 - Поиск и вывод на экран структур с заданным значением элемента.");
	printf("\n5 - Удаление и изменение элемента массива структур с заданным значением элемента.");
	printf("\n6 - Упорядочение массива структур по времени прибытия автобуса(сортировка выбором по убыванию).");
	int choice;
	int begin = 0;
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

			std::cout << "Ошибка ввода, введите число от 0 до 7" << std::endl;
			IsCorrect = false;
		}
		if (!IsCorrect && (choice < 0 || choice>7)) {
			IsCorrect = false;
			std::cout << "Ошибка ввода, введите число от 0 до 7" << std::endl;
		}
		std::cin.ignore();
	} while (!IsCorrect);

	switch (choice)
	{
	case 0:
	{
		std::cout << "\n----Вы вышли из программы, хорошего дня!----\n";
		delete[] races;
		return 0;
	}
	case 1:
	{
		std::cout << "\n==========================================\n";
		printf("\nВведите количество структур: ");
		size = intCheck(0, 7);
		if (intCheck(1, 2) == 1)
		{
			initRaces(races, size, 0, 0);
		}
		break;
	}
	case 2:
	{
		std::cout << "\n==========================================\n";
		printRaces(races, size, 0);
		break;
	}
	case 3:
	{
		std::cout << "\n==========================================\n";
		appendixRaces(races, size);
		break;
	}
	case 4:
	{
		std::cout << "\n==========================================\n";
		searchElements(races, size);
		break;
	}
	case 5:
	{
		std::cout << "\n==========================================\n";
		changeElems(races, size);
		break;
	}
	case 6:
	{
		std::cout << "\n==========================================\n";
		printf("Введите время прибытия автобуса:\nВведите часы: ");
		int h = intCheck(0, 24);
		printf("Введите минуты: ");
		int min = intCheck(0, 59);
		SelectionSort(races, size, h, min);
		break;
	}
	default:
		std::cout << "\nОшибка ввода!\n";
		menu(races, size);
		break;
	}
	menu(races, size);
	return 0;
}