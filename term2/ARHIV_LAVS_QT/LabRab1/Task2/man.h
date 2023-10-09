#ifndef MAN_H
#define MAN_H
#include "Person.h"


class Man : public Person
{
public:
    Man(int, QString, int, int, int, QString, int, int, int, int, int, int);
	QString Str();
	Man();
};

#endif // MAN_H
