#include "parser.h"

Parser::Parser()
{
}

QString Parser::parseVariablesOfTypes(QString s)
{
	String a;
	a = s.toStdString().c_str();
	std::string str = static_cast<std::string>(a);
	std::regex regular("\\b(?:(int|double|float|char|bool|long)\\b\\s+\\w+\\s*(?:=[^,;]+)?(\\s)*(?:(,|;)))");
	// создаем итератор для перебора всех совпадений
	std::sregex_iterator next(str.cbegin(), str.cend(), regular);
	std::sregex_iterator end;
	QString result;
	while (next != end) {
		std::string exp = next->str();
		result.append("Line ");
		int line_number = 1;
		for (auto it = str.cbegin(); it != str.cbegin() + next->position(); it++) {
			if (*it == '\n') {
				line_number++;
			}
		}
		result.append(QString::number(line_number));
		result.append(" expression: ");
		result.append(exp.c_str());
		result.append('\n');
		next++;
	}
	return result;
}

QString Parser::parseClasses(QString s){
	String a;
	a = s.toStdString().c_str();
	std::string str = static_cast<std::string>(a);
	std::regex classStructReg("(class|struct)\\s+\\w+");
	std::regex arrayReg("\\w+\\s+\\w+\\[[^]\\]+");

	std::smatch matches;
	int classCount = 0;
	int structCount = 0;
	int arrayCount = 0;

	// count classes and structs
	std::string::const_iterator searchStart(str.cbegin());
	while (regex_search(searchStart, str.cend(), matches, classStructReg)) {
		if (matches[1].str() == "class") {
			classCount++;
		}
		else {
			structCount++;
		}
		searchStart = matches.suffix().first;
	}

	// count arrays
	searchStart = str.cbegin();
	while (regex_search(searchStart, str.cend(), matches, arrayReg)) {
		arrayCount++;
		searchStart = matches.suffix().first;
	}
	QString res;
	res.append("Classes: ");
	res.append(QString::number(classCount));
	res.append('\n');
	res.append("Structs: ");
	res.append(QString::number(structCount));
	res.append('\n');
	res.append("Arrays: ");
	res.append(QString::number(arrayCount));
	res.append('\n');
	return res;
}

QString Parser::parsePrototypes(QString s){
	String a;
	a = s.toStdString().c_str();
	std::string str = static_cast<std::string>(a);
	std::regex funcReg("(\\w+\\s+){1,2}(\\w+)\\(([^)]*)\\);");
	std::smatch match;
	std::string::const_iterator searchStart(str.cbegin());
	QString res;
	res.append("Prototypes: \n");
	while (regex_search(searchStart, str.cend(), match, funcReg)) {
		res.append(match.str().c_str());
		res.append('\n');
		searchStart = match.suffix().first;
	}
	return res;
}

QString Parser::parseChange(QString s){
	String a;
	a = s.toStdString().c_str();
	std::string str = static_cast<std::string>(a);
	const std::regex pattern("(\\w+)\\s*(\\[.*?\\])*\\s*=\\s*(.*);");
		std::smatch match;
		std::string::const_iterator searchStart(str.cbegin());
		int lineNumber = 1;
		QString res;
		while (std::regex_search(searchStart, str.cend(), match, pattern)) {
			res.append("Line ");
			lineNumber = lineNumber+std::count(searchStart, match[0].first, '\n');
			res.append(QString::number(lineNumber));
			res.append(": ");
			res.append(match[1].str().c_str());
			res.append(" ");
			if (match[2].length() > 0) {
				res.append(match[2].str().c_str());
				res.append(" ");
			}
			res.append("changed to ");
			res.append(match[3].str().c_str());
			res.append("\n");
			searchStart = match.suffix().first;
		}
		return res;
}

QString Parser::parseLocal(QString s){
	String a;
	a = s.toStdString().c_str();
	std::string str = static_cast<std::string>(a);
	const std::regex pattern("\\b(?!(struct|class|void|return)\\s)(\\w+)((\\s+)|(\\s*(\\*)\\s*))(\\w+)\\s*(=\\s*(\\S+))?\\s*(,\\s*\\w+\\s*(=\\s*(\\S+))?)*\\;"); // регулярное выражение
	std::smatch match;
	std::string::const_iterator searchStart(str.cbegin());
	QString res;
	int localVarCount = 0;
	while (std::regex_search(searchStart, str.cend(), match, pattern)) {
		 res.append("Local variable (");
		 res.append(match[2].str().c_str());
		 res.append(" ");
		 res.append(match[7].str().c_str());
		 res.append(") declared at line ");
		 res.append(QString::number(std::count(str.cbegin(), match[0].first, '\n') + 1));
		 res.append('\n');
		searchStart = match.suffix().first;
		++localVarCount;
	}
	return res;
}

QString Parser::parseOverload(QString s){
	String a;
	a = s.toStdString().c_str();
	std::string str = static_cast<std::string>(a);
	std::regex re("(int|float|double|short|long\\slong|char|bool|void|string)\\s+(\\w+)\\s*\\((.*)\\)");
	std::smatch match;
	QString res;
	int line_number = 1;
	std::map<std::string,std::string> l;
	for (std::sregex_iterator it(str.begin(), str.end(), re), end; it != end; ++it) {
		match = *it;
		l.insert(std::pair<std::string, std::string>(match[1].str(),match[2].str()));
		++line_number;
	}
	for(auto mapit{l.begin()};mapit!=l.end();mapit++){
		res.append(mapit->first.c_str());
		res.append("  ");
		res.append(mapit->second.c_str());
		res.append('\n');
	}
	return res;
}

QString Parser::parseBranch(QString s){
	String a;
	a = s.toStdString().c_str();
	std::string str = static_cast<std::string>(a);
	int line = 0;
	int depth  = 1;
	QString res;
	std::stringstream ss(str);
	while(std::getline(ss,str)){
		  line++;        // Используем регулярное выражение для поиска операторов if, while и for
		  std::regex bregex("(if|else|else if|while	|for)\\s*\\(?\\{?");
		  std::smatch match;
		  if (std::regex_search(str, match, bregex)) {
			  depth++;
			  res.append("Line ");
			  res.append(QString::number(line));
			  res.append(" is at depth ");
			  res.append(QString::number(depth));
			  res.append('\n');        }
		  // Используем регулярное выражение для поиска закрывающих скобок
		  std::regex close("\\}");        std::smatch closeMatch;
		  if (std::regex_search(str, closeMatch, close)) {
			  depth--;
		  }
	}
		 return res;
}

QString Parser::parseLogicErrors(QString s){
	String a;
	a = s.toStdString().c_str();
	std::string str = static_cast<std::string>(a);
	std::stringstream ss(str);
	int line = 0;
	std::regex regular("\\b(while|for|do\\s*while)\\s*\\(.*\\)");
	std::regex exp("\\bif\\s*\\(.*\\)\\s*\\{\\s*\\}");
	QString res;
	while (std::getline(ss, str)) {
		line++;
		if (std::regex_search(str, regular)) {
			if (std::regex_search(str, std::regex("\\btrue\\b"))) {
				res.append("Error line: ");
				res.append(QString::number(line));
				res.append('\n');
			}
			if (std::regex_search(str, std::regex("\\bfalse\\b"))) {
				res.append("Error line: ");
				res.append(QString::number(line));
				res.append('\n');
			}
		}
		if (std::regex_search(str, exp)) {
			if (std::regex_search(str, std::regex("\\btrue\\b"))) {
				res.append("Error line: ");
				res.append(QString::number(line));
				res.append('\n');
			}
			if (std::regex_search(str, std::regex("\\bfalse\\b"))) {
				res.append("Error line: ");
				res.append(QString::number(line));
				res.append('\n');
			}
		}
	}
	return res;
}
