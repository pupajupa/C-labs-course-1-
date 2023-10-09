#ifndef WORKERS_H
#define WORKERS_H
#include <QString>
#include <QVector>

class List
{
private:
	struct Workers{
		QString famil;
		QString name;
		QString otch;
		QString number;
		QString hoursCount;
		QString tarif;
		QString salary;
		int prev;
		int next;
		int index;
	};
	int size,begin,end;
	QVector<Workers> arr;
public:
	List();
	void Add(QString,QString,QString,QString,QString,QString,QString);
	QString toString();
	QString toString(const QString&);
	QString searchSalary(const QString &);
	QString searchHours(const QString &);
	QString searchHours();
	void deleteWorker(const QString &);
	void deleteAll();
	bool isEmpty();
	bool findWorker(const QString &);
	bool findHours(const QString &);
	bool findSverh();
	bool findSalary(const QString&);
	bool findSurname(const QString&);
};

#endif // WORKERS_H
