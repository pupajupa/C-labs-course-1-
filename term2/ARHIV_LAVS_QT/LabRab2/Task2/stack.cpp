#include "stack.h"

Stack::Stack(){
	kolvo = 0;
	top = nullptr;
}

Node* Stack::topp(){
	return top;
}

Node *Stack::pop_elems(){
	if(!this->isEmpty()){
		Node* tmp = new Node;
		tmp->prev = top->prev;
		tmp->oper = top->oper;
		tmp->row = top->row;
		tmp->col = top->col;
		top = top->prev;
		--kolvo;
		return tmp;
	}
}

int Stack::count(){
	return kolvo;
}

void Stack::pushh(QChar op, int rowcount, int colcount){
	Node* temp = new Node;
	temp->row = rowcount;
	temp->col = colcount;
	temp->oper = op;
	temp->prev = this->topp();
	top = temp;
	kolvo++;
}

bool Stack::isEmpty(){
	if (!kolvo){
		return true;
	}
	return false;
}

Stack::~Stack(){
	while(!(this->isEmpty())){
		this->pop_elems();
	}
}
