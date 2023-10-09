#ifndef STACK_H
#define STACK_H
#include <vector>
#include<QTextEdit>
class Stack {
public:
	void push(int key, int value);
	int get(int key);
	void remove(int key);
	bool find(int key);
	bool isEmpty();
	int getKey(int index);
	int size();
	void clear();
	void print(QTextEdit* textedit);
private:
	std::vector<int> m_keys;
	std::vector<int> m_values;
};


#endif // STACK_H
