#include "operand.h"

Operand::Operand(){};

void Operand::erase(){
	if(size == 0){
		return;
	}
	else{
		auto ptr = top ->next;
		delete top;
		top = ptr;
		size--;
	}
}

double Operand::answer(){
	return double(top -> inf);
}

double Operand::er(){
	double ptr = top ->inf;
	erase();
	return ptr;
}
Operand::~Operand(){
  while(size--!=0){
	  this ->erase();
	  delete top;
  }
}

void Operand::push(double inf){
	if(size == 0){
		top = new Node(inf);
		size++;
		return;
	}
	auto ptr = top;
	top = new Node(inf);
	top ->next = ptr;
	size++;
}
