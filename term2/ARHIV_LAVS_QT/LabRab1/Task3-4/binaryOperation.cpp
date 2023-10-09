#include <iostream>
#include "binaryOperation.h"

binaryOperation::binaryOperation(expression* leftOperand, const char& operand, expression* rightOperand)
{
	binaryOperation::leftOperand = leftOperand;
	binaryOperation::operand = operand;
	binaryOperation::rightOperand = rightOperand;
}

binaryOperation::~binaryOperation()
{
	delete leftOperand;
	delete rightOperand;
	leftOperand = nullptr;
	rightOperand = nullptr;
}

double binaryOperation::evaluate()
{
	return binaryOperation::makeOperation();
}

double binaryOperation::makeOperation()
{
	if (operand == '+')
	{
		return amount();
	}
	else if (operand == '-')
	{
		return difference();
	}
	else if (operand == '*')
	{
		return multiplication();
	}
	else if (operand == '/')
	{
		return division();
	}
	else
	{
		std::cout << "Incorrect operation sign!";
		return 0;
	}
}

double binaryOperation::amount()
{
	return leftOperand->evaluate() + rightOperand->evaluate();
}

double binaryOperation::difference()
{
	return leftOperand->evaluate() - rightOperand->evaluate();
}

double binaryOperation::multiplication()
{
	return leftOperand->evaluate() * rightOperand->evaluate();
}

double binaryOperation::division()
{
	return leftOperand->evaluate() / rightOperand->evaluate();
}