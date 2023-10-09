#pragma once
#include "expression.h"

class number : public expression
{
private:
    double value;
public:
    number(double);
    double evaluate() override;
};

