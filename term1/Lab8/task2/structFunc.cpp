#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include "Header.h"


struct Train
{
	int departDate = 0; //���� ������
	std::string destination; //����� ����������
	int departh = 0;
	int departmin = 0;//����� �����������
	int place = 0; //�����
};

void initTrains(Train*& trains, int& size, int begin, int k) //1 ���� ������� ��������
{
	trains = new Train[size];
	for (int i = begin; i < size; i++)
	{
		printf("\n----������� ���� %d-� ������----\n", i + 1);
		printf("\n������� ���� ������ ������ \n:1 - �����������.\n:2 - �������.\n:3 - �����.\n:4 - �������.\n:5 - �������.\n:6 - �������.\n:7 - �����������.\n");
		printf("���� ������ ������: ");
		trains[i].departDate = intCheck(1, 7);
		if (intCheck(1, 2) == 1)
		{
			printf("������� ����� ���������� ������: ");
			getline(std::cin, trains[i].destination);
		}
		else
		{
			break;
		}
		if (intCheck(1, 2) == 1)
		{
			printf("������� ����� ����������� ������\n������� ����: ");
			trains[i].departh = intCheck(0, 23);
			printf("������� ������: ");
			trains[i].departmin = intCheck(0, 59);
		}
		else
		{
			break;
		}
		if (intCheck(1, 2) == 1)
		{
			printf("������� ����� ��������� ���� � ������: ");
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

void appendixTrains(Train*& trains, int& size)//3 ���������� ������� ��������
{
	if (size == 0)
	{
		printf("������� ��������������� ����!");
	}
	else
	{
		printf("\n������� ���������� ��������, ������� �� ������ ��������: ");
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
//		std::cout << "������� ���� � ����� � ��� ��������.\n";
//		isIncorrect = false;
//		std::ifstream inpFile("Input.txt", std::ios::in);
//		if (!inpFile.is_open()) {
//			std::cout << "������ ����� ����� �����.\n";
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
			std::cout << "������ �����. ��������� ���� �� ������������ ��������� ���������� �������! (1 <= N <= 15)";
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
					std::cout << "������ �����. ��������� ���� �� ������������ �������� ����! (1 <= N <= 7)";
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
					std::cout << "������ �����. ��������� ���� �� ������������ �������� ����� �����������! (0 <= N <= 23)";
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
					std::cout << "������ �����. ��������� ���� �� ������������ �������� ����� �����������! (0 <= N <= 59)";
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
					std::cout << "������ �����. ��������� ���� �� ������������ ������! (0 <= N <= 500)";
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
		std::cout << "���� ������� ���������������!";
	}
	return trains;
}

void changeElems(Train*& trains, int size)
{
	if (size == 0)
	{
		printf("������� ��������������� ����!");
	}
	else
	{
		printf("������� ����� ������: ");
		int numberOfStruct = intCheck(1, size) - 1;//����� ���������
		if (intCheck(1, 2) == 1)
		{
			printf("������� ����� ���������\n:1 - ���� ������ ������.\n:2 - ����� ����������.\n:3 - ����� ����������� ������.\n:4 - ���������� ��������� ���� � ������.\n:0 - �����.");
			printf("\n��� �����: ");
			int param = intCheck(0, 4);//����� ���������
			switch (param)
			{
			case 0:
			{
				break;
			}
			case 1:
			{
				printf("������� ���� ������ ������: ");
				trains[numberOfStruct].departDate = intCheck(1, 7);
				printf("\n��� �������� ������� ������\n\n");
				if (intCheck(1, 2) == 1)
				{
					changeElems(trains, size);
				}
				break;
			}
			case 2:
			{
				printf("������� ����� ���������� ������: ");
				getline(std::cin, trains[numberOfStruct].destination);
				printf("\n��� �������� ������� ������\n\n");
				if (intCheck(1, 2) == 1)
				{
					changeElems(trains, size);
				}
				break;
			}
			case 3:
			{
				printf("������� ����� ����������: ");
				getline(std::cin, trains[numberOfStruct].destination);
				printf("\n��� �������� ������� ������\n\n");
				if (intCheck(1, 2) == 1)
				{
					changeElems(trains, size);
				}
				break;
			}
			case 4:
			{
				printf("������� ���������� ��������� ���� � ������: ");
				trains[numberOfStruct].place = intCheck(0, 500);
				printf("\n��� �������� ������� ������\n\n");
				if (intCheck(1, 2) == 1)
				{
					changeElems(trains, size);
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

void deleteElems(Train*& trains, int size)
{
	if (size == 0)
	{
		printf("������� ��������������� ����!");
	}
	else
	{
		printf("������� ����� ������: ");
		int numberOfStruct = intCheck(1, size) - 1;//����� ���������
		if (intCheck(1, 2) == 1)
		{
			printf("������� ����� ���������\n:1 - ���� ������ ������.\n:2 - ����� ����������.\n:3 - ����� ����������� ������.\n:4 - ���������� ��������� ���� � ������.\n:0 - �����.");
			printf("\n��� �����: ");
			int param = intCheck(0, 4);//����� ���������
			switch (param)
			{
			case 0:
			{
				break;
			}
			case 1://��������
			{
				trains[numberOfStruct].departDate = 0;
				printf("\n��� �������� ������� �����\n\n");
				if (intCheck(1, 2) == 1)
				{
					deleteElems(trains, size);
				}
				break;
			}
			case 2:
			{
				trains[numberOfStruct].destination = '-';
				printf("\n��� �������� ������� �����\n\n");
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
				printf("\n��� �������� ������� �����\n\n");
				if (intCheck(1, 2) == 1)
				{
					deleteElems(trains, size);
				}
				break;
			}
			case 4:
			{
				trains[numberOfStruct].place = 0;
				printf("\n��� �������� ������� �����\n\n");
				if (intCheck(1, 2) == 1)
				{
					deleteElems(trains, size);
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

void printTrains(Train* trains, int size, int begin)//2 ����� ������� ��������
{
	if (size == 0)
	{
		printf("������� ��������������� ����!");
	}
	else
	{
		for (int i = begin; i < size; i++)
		{
			printf("\n������ (%d)\n", i + 1);
			printf("\n���� ���� ������ �����(����): %d", trains[i].departDate);
			printf("\n��� ����� ����������: ");
			std::cout << trains[i].destination;
			if ((trains[i].departh) < 10 && (trains[i].departmin) < 10)
			{
				printf("\n����� ����������� ������ ��������: 0%d:0%d", trains[i].departh, trains[i].departmin);
			}
			else if (trains[i].departh < 10 && trains[i].departmin > 10)
			{
				printf("\n����� ����������� ������ ��������: 0%d:%d", trains[i].departh, trains[i].departmin);
			}
			else if (trains[i].departh > 10 && trains[i].departmin < 10)
			{
				printf("\n����� ����������� ������ ��������: %d:0%d", trains[i].departh, trains[i].departmin);
			}
			else
			{
				printf("\n����� ����������� ������ ��������: %d:%d", trains[i].departh, trains[i].departmin);
			}
			printf("\n���� ����� ��������� ���� � ������: %d", trains[i].place);
			printf("\n");
		}
	}
}

void searchElements(Train* trains, int size)
{
	if (size == 0)
	{
		printf("������� ��������������� ����!");
	}
	else
	{
		int localChoice = 0;
		do {
			printf("�������� �������� �� �������� ������ ������:\n");
			printf("0 - ����� �� ������.\n");
			printf("1 - ���� ������ ������.\n");
			printf("2 - ����� ����������.\n");
			printf("3 - ����� ��������.\n");
			printf("4 - ���������� ��������� ���� � ������.\n\n");
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

					std::cout << "������ �����, ������� ����� �� 0 �� 4" << std::endl;
					IsCorrect = false;
				}
				if (!IsCorrect && (choice < 0 || choice>4)) {
					IsCorrect = false;
					std::cout << "������� ��������� �����(�������� ����� �� 0 �� 4)" << std::endl;
				}
				std::cin.ignore();
			} while (!IsCorrect);
			bool exists = false;
			switch (choice)
			{
			case 0:
			{
				printf("\n�� ����� �� ������.\n");
				break;
			}
			case 1:
			{
				printf("\n�� ������� ����� ���� ������ ������.\n");
				printf("������� ����: ");
				printf("������� ����� ���������\n:1 - �����������.\n:2 - �������.\n:3 - �����.\n:4 - �������.\n:5 - �������.\n:6 - �������.\n:7 - �����������.\n");
				int dayNum = intCheck(1, 7);
				for (int i = 0; i < size; i++)
				{
					if (trains[i].departDate == dayNum)
					{
						printf("\n������ �������!");
						printf("����� ������: %d", i + 1);
						printf("\n���� ��������: \n");
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
				printf("\n�� ������� ����� �� ������ ����������.\n");
				printf("������� ����� ����������: ");
				char pointDestination[100];
				std::cin.getline(pointDestination, 100);
				for (int i = 0; i < size; i++)
				{
					if (trains[i].destination == pointDestination)
					{
						printf("\n������ �������!");
						printf("\n����� ������: %d", i + 1);
						printf("\n���� ��������: \n");
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
				printf("\n�� ������� ����� �� ������� �����������.\n");
				printf("������� ����� ����������� ������\n������� ����: ");
				int hours = intCheck(0, 24);
				printf("������� ������: ");
				int min = intCheck(0, 59);
				for (int i = 0; i < size; ++i) {
					if ((trains[i].departh == hours) && (trains[i].departmin == min))
					{
						printf("\n������ �������!");
						printf("\n����� ������: %d", i + 1);
						printf("\n���� ��������: \n");
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
				printf("\n�� ������� ����� �� ���������� ��������� ���� � ������.\n");
				printf("������� ���������� ��������� ����: ");
				int count = intCheck(0, 500);
				for (int i = 0; i < size; ++i)
				{
					if (trains[i].place == count)
					{
						printf("\n������ �������!");
						printf("\n����� ������: %d", i + 1);
						printf("\n���� ��������: \n");
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

void result(Train* trains, Train res, int size, int a)
{
	if (size == 0)
	{
		printf("������� ��������������� ����!");
	}
	else
	{
		res = initRes(res);
		for (int i = 0; i < size; i++)
		{
			if (isOk(trains[i], res))
			{
				printf("\n==========================================");
				printf("\n����: %d", i + 1);
				a = 1;
				if ((trains[i].departh) < 10 && (trains[i].departmin) < 10)
				{
					printf("\n����� �����������: 0%d:0%d", trains[i].departh, trains[i].departmin);
				}
				else if (trains[i].departh < 10 && trains[i].departmin > 10)
				{
					printf("\n����� �����������: 0%d:%d", trains[i].departh, trains[i].departmin);
				}
				else if (trains[i].departh > 10 && trains[i].departmin < 10)
				{
					printf("\n����� �����������: %d:0%d", trains[i].departh, trains[i].departmin);
				}
				else
				{
					printf("\n����� �����������: %d:%d", trains[i].departh, trains[i].departmin);
				}
			}
		}
		if (a == 0)
		{
			printf("\n==========================================");
			printf("\n���������� ��������� ����� � ������ ������");
		}
	}
}

int menu(Train*& trains, int& size)
{
	printf("\n==========================================\n");
	printf("\n\t�������:");
	printf("\n0 - ����� �� ���������.");
	printf("\n1 - ������������� ������ �����.");
	printf("\n2 - �������� ������� �����.");
	printf("\n3 - ����� � ����� ������� � �������� ����������");
	printf("\n4 - ���������� ��� ������������� ����� ������ ��������.");
	printf("\n5 - �������� �������� ������ � �������� ��������� ��������.");
	printf("\n6 - ��������� �������� ������ � �������� ��������� ��������.");
	printf("\n7 - ���������� ������.");
	int choice;
	int begin = 0;
	Train res;
	bool IsCorrect;
	do {
		std::cout << "\n��� �����: ";
		IsCorrect = true;
		std::cin >> choice;
		if (std::cin.fail())
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			IsCorrect = false;
			std::cout << "����������� ��������� ��� ������ (�������� �������� ������ ���� ����� ������)" << std::endl;
		}
		if (!IsCorrect && std::cin.get() != '\n')
		{
			std::cin.clear();
			while (std::cin.get() != '\n');
			std::cout << "������ �����, ������� ����� �� 0 �� 7" << std::endl;
			IsCorrect = false;
		}
		if (!IsCorrect && (choice < 0 || choice>7))
		{
			IsCorrect = false;
			std::cout << "������ �����, ������� ����� �� 0 �� 7" << std::endl;
		}
		std::cin.ignore();
	} while (!IsCorrect);

	switch (choice)
	{
	case 0:
	{
		outputInFile(trains, size);
		std::cout << "\n==========================================\n";
		std::cout << "\n----�� ����� �� ���������, �������� ���!----\n";
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
		std::cout << "\n������ �����!\n";
		break;
	}
	menu(trains, size);
	return 0;
}

Train initRes(Train res)
{
	printf("\n������� ���� ������ ������ \n:1 - �����������.\n:2 - �������.\n:3 - �����.\n:4 - �������.\n:5 - �������.\n:6 - �������.\n:7 - �����������.\n");
	printf("���� ������ ������: ");
	res.departDate = intCheck(1, 7);
	printf("������� ����� ���������� ������: ");
	getline(std::cin, res.destination);
	printf("������� ����� ����������� ������\n������� ����: ");
	res.departh = intCheck(0, 23);
	printf("������� ������: ");
	res.departmin = intCheck(0, 59);
	printf("������� ����� ��������� ���� � ������: ");
	res.place = intCheck(0, 500);
	return res;
}

bool isOk(Train trains, Train res)
{
	int countTrainsTime = (trains.departh * 60) + trains.departmin;
	int countResTime = (res.departh * 60) + res.departmin;
	return (res.departDate == trains.departDate && res.destination == trains.destination && res.place <= trains.place && countResTime >= countTrainsTime);
}