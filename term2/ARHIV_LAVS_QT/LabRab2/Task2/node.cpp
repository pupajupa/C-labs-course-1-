#include "node.h"

Node::Node(const Node &ref){
	row = ref.row;
	col = ref.col;
	prev = ref.prev;
	oper = ref.oper;
}

Node::Node(){
	prev = nullptr;
}

Node::~Node(){
	delete this->prev;
	delete this;
}
