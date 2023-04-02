#ifndef WOMAN_H
#define WOMAN_H
#include "Person.h"


class Woman :public Person
{
public:
    Woman(int number, QString name, int age, int hight, int weight, QString hobby, int minAge, int maxAge, int minHight, int maxHight, int minWeight, int maxWeight);
	Woman();
	QString Str();
};

#endif // WOMAN_H
