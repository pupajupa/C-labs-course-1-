#include "Person.h"

Person::Person()
{

}
QString Person::getName() const
{
    return name;
}

void Person::setName(const QString &value)
{
    name = value;
}

int Person::getNumber() const
{
    return number;
}

void Person::setNumber(int value)
{
    number = value;
}

int Person::getAge() const
{
    return age;
}

void Person::setAge(int value)
{
	age = value;
}

int Person::getHight() const
{
    return hight;
}

void Person::setHight(int value)
{
    hight = value;
}


int Person::getWeigth() const
{
    return weigth;
}

void Person::setWeigth(int value)
{
    weigth = value;
}

QString Person::getHobby() const
{
    return hobby;
}

void Person::setHobby(const QString &value)
{
    hobby = value;
}

int Person::getMinAge() const
{
    return minAge;
}

void Person::setMinAge(int value)
{
    minAge = value;
}

int Person::getMaxAge() const
{
    return maxAge;
}

void Person::setMaxAge(int value)
{
    maxAge = value;
}

int Person::getMinHight() const
{
    return minHight;
}

void Person::setMinHight(int value)
{
    minHight = value;
}

int Person::getMaxHight() const
{
    return maxHight;
}

void Person::setMaxHight(int value)
{
    maxHight = value;
}

int Person::getMinWeight() const
{
    return minWeight;
}

void Person::setMinWeight(int value)
{
    minWeight = value;
}

int Person::getMaxWeight() const
{
    return maxWeight;
}

void Person::setMaxWeight(int value)
{
    maxWeight = value;
}

