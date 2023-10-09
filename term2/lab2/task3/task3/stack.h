#ifndef STACK_H
#define STACK_H


#include <QChar>

class Node
{
public:
	Node* prev;
	int row;
	int col;
	QChar sign;
	Node();
	Node(const Node &);
	~Node();
};

class Stack
{
private:
	Node*top;
	int amount;
public:
	Stack();
	~Stack();
	void push_elems(QChar, int, int);
	Node* pop_elems();
	Node* top_elems();
	int count();
	bool isEmpty();
};
#endif // STACK_H
