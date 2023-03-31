#pragma once
struct Race;
int menu(Race*&, int&);
void printInfo();
int intCheck(int, int);
void initRaces(Race*&, int&, int, int);
void printRaces(Race*, int, int);
Race* levelUp(Race*, int, int);
void appendixRaces(Race*&, int&);
void searchElements(Race*, int);
void changeElems(Race*&, int);
void SelectionSort(Race*&, int, int, int);
