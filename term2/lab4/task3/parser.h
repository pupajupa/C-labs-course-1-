#ifndef PARSER_H
#define PARSER_H
#include <QString>
#include "MyString.h"
#include <regex>
class Parser
{
public:
Parser();
QString parseClasses(QString);
QString parseVariablesOfTypes(QString);
QString parsePrototypes(QString);
QString parseChange(QString);
QString parseLocal(QString);
QString parseOverload(QString);
QString parseBranch(QString);
QString parseLogicErrors(QString);
};

#endif // PARSER_H
