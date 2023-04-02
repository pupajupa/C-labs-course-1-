#ifndef NODE_H
#define NODE_H
#include <QChar>

class Node
{
public:
	QChar oper;
	Node();
	Node* prev;
	int row;
	int col;
	Node(const Node &);
	~Node();
};


#endif // NODE_H
