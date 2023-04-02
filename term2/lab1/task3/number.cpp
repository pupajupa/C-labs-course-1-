#include "number.h"

number::number(double value)
{
	number::value = value;
};

double number::evaluate()
{
	return value;
}
