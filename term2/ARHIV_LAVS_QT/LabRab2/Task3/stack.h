#ifndef STACK_H
#define STACK_H
#include <QChar>
#include <QString>
#include <QMessageBox>
#include <QtMath>
class Stack{
private:
    int size = 0;
    struct Node{
		Node(QChar inf):inf(inf){};
        Node* next;
		QChar inf;
    };
public:
		Stack();
		~Stack();
		void push(QChar);
		void erase();
		int join(QChar);
		QString prev(QChar);
		QString last();
private:
	Node* top = nullptr;
};




#endif // STACK_H
