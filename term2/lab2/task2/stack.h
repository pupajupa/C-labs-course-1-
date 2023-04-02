#ifndef STACK_H
#define STACK_H
#include <QChar>
#include <node.h>
class Stack
{
public:
	Stack();
	~Stack();
	void pushh(QChar, int, int);
	Node* pop_elems();
	Node* topp();
	int count();
	bool isEmpty();
private:
	Node*top;
	int kolvo;
};

#endif // STACK_H
