#include "woman.h"
#include "Person.h"

Woman::Woman(int number, QString name, int age, int hight, int weight, QString hobby, int minAge, int maxAge, int minHight, int maxHight, int minWeight, int maxWeight)
{
    this->number = number;
    this->name = name;
    this->age = age;
    this->hight = hight;
    this->weigth = weight;
    this->hobby = hobby;
    this->minAge = minAge;
    this->maxAge = maxAge;
    this->minHight = minHight;
    this->maxHight = maxHight;
    this->minWeight = minWeight;
    this->maxWeight = maxWeight;
}

QString Woman::Str()
{
	return "№" + QString::number(number) + " \nИмя: " + name + ", " + QString::number(age) + " лет, "  + QString::number(hight) + " см,  " + QString::number(weigth) +" кг, " + "увлечения: " + hobby;
}

Woman::Woman()
{

}
