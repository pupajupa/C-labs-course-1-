#include "stack.h"

Stack::Stack(){}

Stack::~Stack(){
    while(size--!=0){
        this -> erase();
		delete top;
    }
}

void Stack::push(QChar inf){
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
void Stack::erase(){
	if(size == 0){
		return;
	}
	auto ptr = top ->next;
	delete top;
	top = ptr;
	size--;
}





QString Stack::last(){
 QString str;
 auto ptr = top;
 for(int i = 0; i < size; i++){
	 if(ptr->inf == ')'||ptr->inf == '('  ){
         ptr = ptr ->next;
         continue;
     }
	 str.push_back(ptr->inf);
     ptr = ptr ->next;
 }
 return str;
}
int Stack::join(QChar inf){
	if(inf == '^'){
        return 4;
    }
	else if(inf == '*' || inf == '/'){
        return 3;
    }
	else if(inf == '+' || inf == '-'){
        return 2;
    }
	else if(inf == '(' || inf == ')'){
        return 1;
    }
    return -1;
}

QString Stack::prev(QChar inf)
{
	if(size == 0){
		return "";
	}
	QString str = "";
	while(true){
		if(size == 0){
			break;
		}
		if(top ->inf == '(' && inf == ')'){
			this->erase();
			break;
		}
		if(size!= 0 && join(top ->inf) >= join(inf)){
			auto str2 = top ->inf;
			this->erase();
			str.push_back(str2);
		}
		else	{
			break;
		}
	}
	return str;
}

