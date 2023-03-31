#pragma once
struct Train;
void printInfo();
int intCheck(int, int);
Train* inputFromFile(int&);
void printTrains(Train*, int, int);
void initTrains(Train*&, int&, int, int);
Train* levelUp(Train*, int, int);
void appendixTrains(Train*&, int&);
void changeElems(Train*&, int);
void deleteElems(Train*&, int);
void searchElements(Train*, int);
int menu(Train*&, int&);
void outputInFile(Train*, int);
Train initRes(Train);
bool isOk(Train, Train);
void result(Train*, Train, int, int);