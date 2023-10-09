#ifndef TRAINSINF_H
#define TRAINSINF_H
#include <QString>
#include <QDate>
#include <QTime>

class List
{
public:
	List();
	~List();
	QString toString();
	QString toString(const QString &dateDepartment,const QString &numberTrain);
	QString toTime(const QTime &timeDepartment,const QString &destination);
	bool toBoolOrder(const QString &numTr,const QTime &timeDeparture,const QString &orderSeet, const QString &destination,const QDate &orderDate);
	void deleteTravel(const QString &destination);
	void deleteAll();
	void addNode(QDate departureDate, QString destination, QTime departureTime, QString freeSeatsCount,QString trainNumber);
	bool isEmpty();
private:
	struct Node
	{
		QString destination;
		QDate departureDate;
		QTime departureTime;
		QString freeSeatsCount;
		QString trainNumber;
		struct Node* prev;
		struct Node* next;
	};
	Node* head;
	Node* tail;
};

#endif // TRAINSINF_H
