#include "workers.h"

List::List() : begin(-1), end(-1), size(0){}

void List::Add(QString famil,QString name,QString otch,QString number,QString hoursCount,QString tarif,QString salary)
{
	Workers node;
	node.famil = famil;
	node.name = name;
	node.otch = otch;
	node.number = number;
	node.hoursCount = hoursCount;
	node.tarif = tarif;
	int zp = 0;
	if(hoursCount.toInt()>144)
	{
		zp = (hoursCount.toInt() - 144)*(tarif.toInt()*2) +  144*tarif.toInt();
	}
	else
	{
		zp = hoursCount.toInt() * tarif.toInt();
	}
	salary = QString::number(zp);
	node.salary = salary;
	if (!arr.size()){
		end = 0;
		begin = 0;
		node.prev = -1;
		node.next = -1;
	}
	else{
		end = arr.size();
		begin = 0;
		node.prev = arr.size()-1;
		arr[node.prev].next = arr.size();
		node.next = -1;
	}
	arr.push_back(node);
}

QString List::toString(){
	QString str;
	for(int i = 0; i < arr.size(); ++i)
	{
		str += arr[i].famil;
		str += ' ';
		str += arr[i].name;
		str += ' ';
		str += arr[i].otch;
		str += ' ';
		str += arr[i].number;
		str += ' ';
		str += arr[i].hoursCount;
		str += ' ';
		str += arr[i].tarif;
		str += '\n';
	}
	return str;
}

QString List::toString(const QString &famil)
{
	QString str;
	for(int i = 0; i < arr.size(); ++i)
	{
		if(arr[i].famil == famil)
		{
			str += arr[i].famil;
			str += ' ';
			str += arr[i].name;
			str += ' ';
			str += arr[i].otch;
			str += ' ';
			str += arr[i].number;
			str += ' ';
			str += arr[i].hoursCount;
			str += ' ';
			str += arr[i].tarif;
			str += '\n';
		}
	}
	return str;
}

QString List::searchSalary(const QString &salary)
{
	QString str;
	for(int i = 0; i < arr.size(); ++i)
	{
		if(arr[i].salary.toInt() > salary.toInt())
		{
			str += arr[i].famil;
			str += ' ';
			str += arr[i].name;
			str += ' ';
			str += arr[i].otch;
			str += ' ';
			str += arr[i].number;
			str += ' ';
			str += arr[i].hoursCount;
			str += ' ';
			str += arr[i].tarif;
			str += '\n';
		}
	}
	return str;
}
QString List::searchHours(const QString &hoursCount)
{
	QString str;
	for(int i = 0; i < arr.size(); ++i)
	{
		if(arr[i].hoursCount.toInt() > hoursCount.toInt())
		{
			str += arr[i].famil;
			str += ' ';
			str += arr[i].name;
			str += ' ';
			str += arr[i].otch;
			str += ' ';
			str += arr[i].number;
			str += ' ';
			str += arr[i].hoursCount;
			str += ' ';
			str += arr[i].tarif;
			str += '\n';
		}
	}
	return str;
}

QString List::searchHours()
{
	QString str;
	for(int i = 0; i < arr.size(); ++i)
	{
		if(arr[i].hoursCount.toInt() > 144)
		{
			str += arr[i].famil;
			str += ' ';
			str += arr[i].name;
			str += ' ';
			str += arr[i].otch;
			str += ' ';
			str += arr[i].number;
			str += ' ';
			str += arr[i].hoursCount;
			str += ' ';
			str += arr[i].tarif;
			str += '\n';
		}
	}
	return str;
}

void List::deleteWorker(const QString &number)
{
	for(int i = 0; i < arr.size(); ++i)
	{
		if(arr[i].number == number)
		{
			arr.erase(arr.begin() + i);
			end = arr.size();
			break;
		}
	}
	for(int i = 0; i < arr.size(); ++i)
	{
		arr[i].prev = arr.size()-1;
		arr[arr[i].prev].next = arr.size();
		arr[i].next = -1;
	}
}

void List::deleteAll()
{
	arr.clear();
	begin = -1;
	end = -1;
}

bool List::isEmpty()
{
	if(!arr.size()){
		return true;
	}
	return false;
}

bool List::findWorker(const QString &number)
{
	for (int i = 0; i < arr.size(); ++i){
		if(arr[i].number == number){
			return true;
		}
	}
	return false;
}

bool List::findHours(const QString &hours)
{
	for(int i = 0; i < arr.size(); ++i)
	{
		if(arr[i].hoursCount.toInt() > hours.toInt())
		{
			return true;
		}
	}
	return false;
}

bool List::findSverh()
{
	for(int i = 0; i < arr.size(); ++i)
	{
		if(arr[i].hoursCount.toInt() > 144)
		{
			return true;
		}
	}
	return false;
}

bool List::findSalary(const QString&salary)
{
	for(int i = 0; i < arr.size(); ++i)
	{
		if(arr[i].salary.toInt() > salary.toInt())
		{
			return true;
		}
	}
	return false;
}
bool List::findSurname(const QString&surname)
{
	for(int i = 0; i < arr.size(); ++i)
	{
		if(arr[i].famil == surname)
		{
			return true;
		}
	}
	return false;
}
