#ifndef PERSON_H
#define PERSON_H
#include <QString>

class Person
{
public:
    Person();
    QString getName() const;
    void setName(const QString &value);

    int getNumber() const;
    void setNumber(int value);

    int getAge() const;
    void setAge(int value);

    int getHight() const;
    void setHight(int value);

    int getWeigth() const;
    void setWeigth(int value);

    QString getHobby() const;
    void setHobby(const QString &value);

    int getMinAge() const;
    void setMinAge(int value);

    int getMaxAge() const;
    void setMaxAge(int value);

    int getMinHight() const;
    void setMinHight(int value);

    int getMaxHight() const;
    void setMaxHight(int value);

    int getMinWeight() const;
    void setMinWeight(int value);

    int getMaxWeight() const;
    void setMaxWeight(int value);

	QString Str();
protected:
    int number;
    QString name;
    int age;
    int hight;
    int weigth;
    QString habit;
    QString hobby;
    int minAge;
    int maxAge;
    int minHight;
    int maxHight;
    int minWeight;
    int maxWeight;
};



#endif // PERSON_H
