#include <iostream>
#include "expression.h"
#include "number.h"
#include "binaryOperation.h"

bool check_eq(expression const*, expression const*);

int main()
{
	expression* sube = new binaryOperation(new number(4.5), '*', new number(5.0));
	expression* expr = new binaryOperation(new number(3), '+', sube);
	//expression* expr1 = new binaryOperation(new number(20), '-', new binaryOperation(new number(4.5), '+', new binaryOperation(new number(20), '-', new binaryOperation(new number(4.5), '+', new number(8)))));
	std::cout << expr->evaluate() << std::endl;
	if (check_eq(sube, expr))
	{
		std::cout<<"True";
	}
	else
	{
		std::cout<<"False";
	}
	delete expr;
	return 0;
}

bool check_eq(expression const* left, expression const* right)
{
	return (*((size_t*)left) == *((size_t*)right));
}