#include <iostream>
#include <string>
#include "Header.h"

struct Race
{
	int numberBus = 0;
	std::string typeBus, destination;
	int departh = 0;
	int departmin = 0;//����� �����������
	int arriveh = 0;
	int arrivemin = 0;//����� ��������
};

void initRaces(Race*& races, int& size, int begin, int k) //1 ���� ������� ��������
{
	if (k == 0)
	{
		races = new Race[size];
	}
	for (int i = begin; i < size; i++)
	{
		printf("\n----������� ���� %d-� ������----\n", i + 1);
		printf("\n������� ����� ����� ��������: ");
		races[i].numberBus = intCheck(0, 1000);

		if (intCheck(1, 2) == 1)
		{
			printf("������� ��� ��������: ");
			getline(std::cin, races[i].typeBus);
		}
		else
		{
			break;
		}
		if (intCheck(1, 2) == 1)
		{
			printf("������� ����� ����������: ");
			getline(std::cin, races[i].destination);
		}
		else
		{
			break;
		}
		if (intCheck(1, 2) == 1)
		{
			printf("������� ����� ����������� ��������\n������� ����: ");
			races[i].departh = intCheck(0, 23);
			printf("������� ������: ");
			races[i].departmin = intCheck(0, 59);
		}
		else
		{
			break;
		}
		if (intCheck(1, 2) == 1)
		{
			printf("������� ����� �������� ��������:\n������� ����: ");
			races[i].arriveh = intCheck(0, 23);
			printf("������� ������: ");
			races[i].arrivemin = intCheck(0, 59);
		}
		else
		{
			break;
		}
	}
	k++;
}

void printRaces(Race* races, int size, int begin)//2 ����� ������� ��������
{
	if (size == 0)
	{
		printf("\nNo struct.\n");
	}
	else
	{
		for (int i = begin; i < size; i++)
		{
			printf("\n������ (%d)\n", i + 1);
			printf("\n��� ����� �����: %d", races[i].numberBus);
			printf("\n��� ��� ��������: ");
			std::cout << races[i].typeBus;
			printf("\n��� ����� ����������: ");
			std::cout << races[i].destination;
			if ((races[i].departh) < 10 && (races[i].departmin) < 10)
			{
				printf("\n����� ����������� ������ ��������: 0%d:0%d", races[i].departh, races[i].departmin);
			}
			else if (races[i].departh < 10 && races[i].departmin > 10)
			{
				printf("\n����� ����������� ������ ��������: 0%d:%d", races[i].departh, races[i].departmin);
			}
			else if (races[i].departh > 10 && races[i].departmin < 10)
			{
				printf("\n����� ����������� ������ ��������: %d:0%d", races[i].departh, races[i].departmin);
			}
			else
			{
				printf("\n����� ����������� ������ ��������: %d:%d", races[i].departh, races[i].departmin);
			}
			if ((races[i].arriveh < 10) && (races[i].arrivemin) < 10)
			{
				printf("\n����� �������� ������ ��������: 0%d:0%d", races[i].arriveh, races[i].arrivemin);
			}
			else if (races[i].arriveh < 10 && races[i].arrivemin > 10)
			{
				printf("\n����� �������� ������ ��������: 0%d:%d", races[i].arriveh, races[i].arrivemin);
			}
			else if (races[i].arriveh > 10 && races[i].arrivemin < 10)
			{
				printf("\n����� �������� ������ ��������: %d:0%d", races[i].arriveh, races[i].arrivemin);
			}
			else
			{
				printf("\n����� �������� ������ ��������: %d:%d", races[i].arriveh, races[i].arrivemin);
			}
			printf("\n");
			int countDepartHours = races[i].departh;
			int countDepartMin = races[i].departmin;
			int countArriveHours = races[i].arriveh;
			int countArriveMin = races[i].arrivemin;
			countDepartMin += countDepartHours * 60;
			countArriveMin += countArriveHours * 60;
			int dm, dh;
			dm = countArriveMin - countDepartMin;//������� � �������
			if (dm <= 0)
			{
				dm += 1440;
			}
			dh = dm / 60; //������� � ����� 
			dm %= 60;
			if ((dh < 10) && (dm < 10))
			{
				printf("����� � ���� ������ ��������: 0%d:0%d", dh, dm);
			}
			else if (dh < 10 && dm > 10)
			{
				printf("����� � ���� ������ ��������: 0%d:%d", dh, dm);
			}
			else if (dh > 10 && dm < 10)
			{
				printf("����� � ���� ������ ��������: %d:0%d", dh, dm);
			}
			else
			{
				printf("����� � ���� ������ ��������: %d:%d", dh, dm);
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

void appendixRaces(Race*& races, int& size)//3 ���������� ������� ��������
{
	if (size == 0)
	{
		printf("������� ��������������� ���������!");
	}
	else
	{
		printf("\n������� ���������� ��������, ������� �� ������ ��������: ");
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
		printf("������� ��������������� ���������!");
	}
	else
	{
		int localChoice = 0;
		do {
			printf("\n�������� �������� �� �������� ������ ������:\n");
			printf("0 - ����� �� ������.\n");
			printf("1 - ����� �����.\n");
			printf("2 - ��� ��������.\n");
			printf("3 - ����� ����������.\n");
			printf("4 - ����� �����������.\n");
			printf("5 - ����� ��������.\n\n");
			int choice = 0;
			bool IsCorrect;
			do {
				std::cout << "\n��� �����: ";
				IsCorrect = true;
				std::cin >> choice;
				if (std::cin.fail()) {
					std::cin.clear();
					while (std::cin.get() != '\n');
					IsCorrect = false;
					std::cout << "����������� ��������� ��� ������ (�������� �������� ������ ���� ����� ������)" << std::endl;
				}
				if (!IsCorrect && std::cin.get() != '\n') {
					std::cin.clear();
					while (std::cin.get() != '\n');

					std::cout << "������ �����, ������� ����� �� 0 �� 5" << std::endl;
					IsCorrect = false;
				}
				if (!IsCorrect && (choice < 0 || choice>5)) {
					IsCorrect = false;
					std::cout << "������� ��������� �����(�������� ����� �� 0 �� 5)" << std::endl;
				}
				std::cin.ignore();
			} while (!IsCorrect);


			bool exists = false;
			switch (choice)
			{
			case 0:
			{
				printf("\n�� ����� �� ������.\n\n\n");
				break;
			}
			case 1:
			{
				printf("\n�� ������� ����� �� ������ �����.\n");
				printf("������� ����� �����: ");
				char numRaces = intCheck(0, 1000);
				for (int i = 0; i < size; i++)
				{
					if (races[i].numberBus == numRaces)
					{
						printf("\n������ �������!");
						printf("����� ������: %d", i + 1);
						printf("\n���� ��������: \n");
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
				printf("\n�� ������� ����� �� ���������� ���� ��������.\n");
				printf("������� ��� ��������: ");
				char typesBusSearch[100];
				std::cin.getline(typesBusSearch, 100);
				for (int i = 0; i < size; ++i)
				{
					if (races[i].typeBus == typesBusSearch)
					{
						printf("\n������ �������!");
						printf("����� ������: %d", i + 1);
						printf("\n���� ��������: \n");
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
				printf("\n�� ������� ����� �� ������ ����������.\n");
				printf("������� ����� ����������: ");
				char pointDestination[100];
				std::cin.getline(pointDestination, 100);
				for (int i = 0; i < size; i++)
				{
					if (races[i].destination == pointDestination)
					{
						printf("\n������ �������!");
						printf("����� ������: %d", i + 1);
						printf("\n���� ��������: \n");
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
				printf("\n�� ������� ����� �� ������� �����������.\n");
				printf("������� ����� ����������� ��������\n������� ����: ");
				int hours = intCheck(0, 24);
				printf("������� ������: ");
				int min = intCheck(0, 59);
				for (int i = 0; i < size; ++i) {
					if ((races[i].departh == hours) && (races[i].departmin == min))
					{
						printf("\n������ �������!");
						printf("����� ������: %d", i + 1);
						printf("\n���� ��������: \n");
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
				printf("\n�� ������� ����� �� ������� �����������.\n");
				printf("������� ����� ����������� ��������\n������� ����: ");
				int hours = intCheck(0, 24);
				printf("������� ������: ");
				int min = intCheck(0, 59);
				for (int i = 0; i < size; ++i) {
					if ((races[i].arriveh == hours) && (races[i].arrivemin == min))
					{
						printf("\n������ �������!");
						printf("\n����� ������: %d", i + 1);
						printf("\n���� ��������: \n");
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
				std::cout << "\n������ � ����� ���������� ���.";
			}
			std::cout << "\n�� ������ ���������� �����? (1 - ��\t2 - ���)";
			int localIsCorrect;
			do {
				std::cout << "\n��� �����: ";
				IsCorrect = true;
				std::cin >> localIsCorrect;
				if (std::cin.fail()) {
					std::cin.clear();
					while (std::cin.get() != '\n');
					IsCorrect = false;
					std::cout << "����������� ��������� ��� ������ (�������� �������� ������ ���� ����� ������)" << std::endl;
				}
				if (!IsCorrect && std::cin.get() != '\n') {
					std::cin.clear();
					while (std::cin.get() != '\n');

					std::cout << "������ �����, ������� ����� 1 ��� 2" << std::endl;
					IsCorrect = false;
				}
				if (!IsCorrect && (localIsCorrect < 1 || localChoice>2)) {
					IsCorrect = false;
					std::cout << "������� ��������� �����(�������� ����� �� 1 �� 2)" << std::endl;
				}
				std::cin.ignore();
			} while (!IsCorrect);
			if (localIsCorrect == 2)
			{
				printf("\n�� ������� ��������� �����.\n");
				break;
			}
		} while (localChoice != 0);
	}
}

void changeElems(Race*& races, int size) 
{
	if (size == 0)
	{
		printf("������� ��������������� ���������!");
	}
	else
	{
		printf("\n�� ������ ������� ������ ��� ��������? (1 - �������\t2 - ��������)\n��� �����: ");
		int choice = intCheck(1, 3);//1-������� 2-��������
		if (intCheck(1, 2) == 1)
		{
			printf("������� ����� ������: ");
			int numberOfStruct = intCheck(1, size) - 1;//����� ���������
			if (intCheck(1, 2) == 1)
			{
				printf("������� ����� ���������\n:1 - ����� ����� ��������.\n:2 - ��� ��������.\n:3 - ����� ����������.\n:4 - ����� ����������� ��������.\n:5 - ����� �������� ��������.\n:0 - �����.");
				printf("\n��� �����: ");
				int param = intCheck(0, 5);//����� ���������
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
					case 1://��������
					{
						races[numberOfStruct].numberBus = 0;
						printf("\n��� �������� ������� �����\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 2:
					{
						races[numberOfStruct].typeBus = '-';
						printf("\n��� �������� ������� �����\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 3:
					{
						races[numberOfStruct].destination = '-';
						printf("\n��� �������� ������� �����\n\n");
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
						printf("\n��� �������� ������� �����\n\n");
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
						printf("\n��� �������� ������� �����\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					default:
						std::cout << "\n������ �����!\n";
						menu(races, size);
						break;
					}
					break;
				}
				case 2://���������
				{
					switch (param)
					{
					case 0:
					{
						break;
					}
					case 1:
					{
						printf("������� ����� ����� ��������: ");
						races[numberOfStruct].numberBus = intCheck(0, 1000);
						printf("\n��� �������� ������� ������\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 2:
					{
						printf("������� ��� ��������: ");
						getline(std::cin, races[numberOfStruct].typeBus);
						printf("\n��� �������� ������� ������\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 3:
					{
						printf("������� ����� ����������: ");
						getline(std::cin, races[numberOfStruct].destination);
						printf("\n��� �������� ������� ������\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 4:
					{
						printf("������� ����� ����������� ��������\n������� ����: ");
						races[numberOfStruct].departh = intCheck(0, 24);
						printf("������� ������: ");
						races[numberOfStruct].departmin = intCheck(0, 59);
						printf("\n��� �������� ������� ������\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					case 5:
					{
						printf("������� ����� �������� ��������:\n������� ����: ");
						races[numberOfStruct].arriveh = intCheck(0, 24);
						printf("������� ������: ");
						races[numberOfStruct].arrivemin = intCheck(0, 59);
						printf("\n��� �������� ������� ������\n\n");
						if (intCheck(1, 2) == 1)
						{
							changeElems(races, size);
						}
						break;
					}
					default:
						std::cout << "\n������ �����!\n";
						break;
					}
					break;
				}
				default:
					std::cout << "\n������ �����!\n";
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
	printf("\n\t�������:");
	printf("\n0 - ����� �� ���������.");
	printf("\n1 - ������������ ������������� ����������� ������� ��������, �������� ������� �������� � ����������.");
	printf("\n2 - �������� ����������� ������������� ������� ��������.");
	printf("\n3 - ���������� ��� ������������� ������� �������� ������ �����������.");
	printf("\n4 - ����� � ����� �� ����� �������� � �������� ��������� ��������.");
	printf("\n5 - �������� � ��������� �������� ������� �������� � �������� ��������� ��������.");
	printf("\n6 - ������������ ������� �������� �� ������� �������� ��������(���������� ������� �� ��������).");
	int choice;
	int begin = 0;
	bool IsCorrect;
	do {
		std::cout << "\n��� �����: ";
		IsCorrect = true;
		std::cin >> choice;
		if (std::cin.fail()) {
			std::cin.clear();
			while (std::cin.get() != '\n');
			IsCorrect = false;
			std::cout << "����������� ��������� ��� ������ (�������� �������� ������ ���� ����� ������)" << std::endl;
		}
		if (!IsCorrect && std::cin.get() != '\n') {
			std::cin.clear();
			while (std::cin.get() != '\n');

			std::cout << "������ �����, ������� ����� �� 0 �� 7" << std::endl;
			IsCorrect = false;
		}
		if (!IsCorrect && (choice < 0 || choice>7)) {
			IsCorrect = false;
			std::cout << "������ �����, ������� ����� �� 0 �� 7" << std::endl;
		}
		std::cin.ignore();
	} while (!IsCorrect);

	switch (choice)
	{
	case 0:
	{
		std::cout << "\n----�� ����� �� ���������, �������� ���!----\n";
		delete[] races;
		return 0;
	}
	case 1:
	{
		std::cout << "\n==========================================\n";
		printf("\n������� ���������� ��������: ");
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
		printf("������� ����� �������� ��������:\n������� ����: ");
		int h = intCheck(0, 24);
		printf("������� ������: ");
		int min = intCheck(0, 59);
		SelectionSort(races, size, h, min);
		break;
	}
	default:
		std::cout << "\n������ �����!\n";
		menu(races, size);
		break;
	}
	menu(races, size);
	return 0;
}