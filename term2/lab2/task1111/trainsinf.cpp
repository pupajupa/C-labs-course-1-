#include "trainsinf.h"
#include <QString>
#include <QDate>
#include <QTime>

List::List() : head(nullptr), tail(nullptr){}

List::~List()
{
	while (head)                      //Пока по адресу на начало списка что-то есть
	{
		tail = head->next;             //Резервная копия адреса следующего звена списка
		delete head;                   //Очистка памяти от первого звена
		head = tail;                   //Смена адреса начала на адрес следующего элемента
	}
}

QString List::toString()
{
	QString str;
	Node *temp = head;
	while (temp != nullptr)
	{
		str += temp->trainNumber;
		str += ' ';
		str += temp->destination;
		str += ' ';
		str += temp->departureDate.toString("dd.MM.yyyy");
		str += ' ';
		str += temp->departureTime.toString(Qt::LocaleDate);;
		str += ' ';
		str += temp->freeSeatsCount;
		str += '\n';
		temp = temp->next;
	}
	return str;
}

void List::addNode(QDate departureDate, QString destination, QTime departureTime, QString freeSeatsCount,QString trainNumber)
{
	Node* temp = new Node();
	temp->next = nullptr;
	temp->trainNumber = trainNumber;
	temp->departureTime = departureTime;
	temp->freeSeatsCount = freeSeatsCount;
	temp->departureDate = departureDate;
	temp->destination = destination;
	if (head != nullptr)
	{
		temp->prev = tail;
		tail->next = temp;
		tail = temp;
	}
	else
	{
		temp->prev = nullptr;
		head = tail = temp;
	}
}

void List::deleteTravel(const QString &destination)
{
	Node *temp = head;
	while (temp != nullptr)
	{
		if (temp->destination == destination){
			if (temp->prev != nullptr && temp->next != nullptr){
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
			}
			else if (temp->prev == nullptr && temp->next == nullptr){
				head = temp->next;
				tail = temp->prev;
			}
			else if (temp->prev == nullptr){
				head = temp->next;
				temp->next->prev = temp->prev;
			}
			else if (temp->next == nullptr){
				tail = temp->prev;
				temp->prev->next = temp->next;
			}
		}
		temp = temp->next;
	}
}

void List::deleteAll()
{
	head = nullptr;
	tail=nullptr;
}

bool List::isEmpty()
{
	if(head == nullptr){
		return true;
	}
	return false;
};

QString List::toString(const QString &dateDepartment,const QString &numberTrain)
{
	QString str;
	Node *temp = head;
	while (temp != nullptr)
	{
		if (temp->departureDate.toString() == dateDepartment && temp->trainNumber == numberTrain)
		{
			str += temp->trainNumber;
			str += ' ';
			str += temp->destination;
			str += ' ';
			str += temp->departureDate.toString("dd.MM.yyyy");
			str += ' ';
			str += temp->departureTime.toString(Qt::LocaleDate);;
			str += ' ';
			str += temp->freeSeatsCount;
			str += '\n';
		}
		temp = temp->next;
	}
	return str;
}

QString List::toTime(const QTime &timeDepartment,const QString &destination)
{
	QString str;
	Node *temp = head;
	while (temp != nullptr)
	{
		int sec = QTime(0,0,0).secsTo(timeDepartment);
		int tempsec = QTime(0,0,0).secsTo(temp->departureTime);
		if (tempsec <= sec && temp->destination == destination)
		{
			str += temp->trainNumber;
			str += ' ';
			str += temp->destination;
			str += ' ';
			str += temp->departureDate.toString("dd.MM.yyyy");
			str += ' ';
			str += temp->departureTime.toString(Qt::LocaleDate);;
			str += ' ';
			str += temp->freeSeatsCount;
			str += '\n';
		}
		temp = temp->next;
	}
	return str;
}
bool List::toBoolOrder(const QString &numTr,const QTime &timeDeparture,const QString &orderSeet, const QString &destination,const QDate &orderDate)
{
	bool flag = false;
	Node *temp = head;
	while (temp != nullptr)
	{
		if (temp->trainNumber.toInt()==numTr.toInt() && temp->destination.toStdString() == destination.toStdString() && temp->departureDate.toJulianDay() == orderDate.toJulianDay() && temp->departureTime.minute() == timeDeparture.minute() && temp->freeSeatsCount.toInt() >= orderSeet.toInt())
		{
			flag = true;
		}
		temp = temp->next;
	}
	return flag;
}
