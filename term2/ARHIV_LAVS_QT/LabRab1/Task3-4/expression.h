#pragma once
class expression
{
public:
	virtual double evaluate() = 0;
	virtual~expression(){};
};

