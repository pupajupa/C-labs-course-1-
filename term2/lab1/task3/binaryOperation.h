#pragma once
#include "expression.h"
class binaryOperation : public expression
{
private:
    char operand;
    expression* leftOperand;
    expression* rightOperand;
    double makeOperation();
    double amount();
    double difference();
    double multiplication();
    double division();
public:
    binaryOperation(expression*,const char&, expression*);
    ~binaryOperation();
    double evaluate() override;
};

