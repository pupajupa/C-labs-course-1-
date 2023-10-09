#include "stack.h"


Stack::Stack()
{
	amount = 0;
	top = nullptr;
}

Node* Stack::top_elems()
{
	return top;
}

void Stack::push_elems(QChar sign, int row, int col)
{
	Node* temp = new Node;
	temp->sign = sign;
	temp->row = row;
	temp->col = col;
	temp->prev = this->top_elems();
	top = temp;
	++amount;
}

bool Stack::isEmpty()
{
	if (!amount) return 1;
	return 0;
}

Node *Stack::pop_elems()
{
	if(!this->isEmpty())
	{
		Node* temp = new Node;
		temp->prev = top->prev;
		temp->sign = top->sign;
		temp->row = top->row;
		temp->col = top->col;
		top = top->prev;
		--amount;
		return temp;
	}
}

int Stack::count()
{
	return amount;
}


Node::Node()
{
	prev = nullptr;
}

Node::Node(const Node &link)
{
	prev = link.prev;
	sign = link.sign;
	row = link.row;
	col = link.col;
}

Node::~Node()
{
	delete this->prev;
	delete this;
}

Stack::~Stack()
{
	while(!this->isEmpty()){
		this->pop_elems();
	}
}
