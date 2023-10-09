#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <stack.h>

class HashTable:public Stack {
public:
	HashTable(int capacity);
	virtual ~HashTable() {}
	void put(int key, int value);
	int get(int key);
	void remove(int key);
	bool find(int key);
	bool isEmpty();
	void clear();
	int getMinKey();
	QString show() {
		QString res;
		for (int i = 0; i < m_capacity; i++) {
			Stack& stack = m_table[i];
			for (int j = 0; j < stack.size(); j++) {
				res+="(";
				res.append(QString::number(stack.getKey(j)));
				res+=") ";
			}
		}
		return res;
	}
private:
	int hash(int key) {
		return key % m_capacity;
	}
	std::vector<Stack> m_table;
	int m_capacity;
};



#endif // HASHTABLE_H
