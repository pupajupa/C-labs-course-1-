#include "hashtable.h"

HashTable::HashTable(int capacity)
{
	m_capacity = capacity;
	m_table.resize(capacity);
}

void HashTable::put(int key, int value)
{
	int index = hash(key);
	Stack& stack = m_table[index];
	stack.push(key, value);
}

int HashTable::get(int key) {
	int index = hash(key);
	Stack& stack = m_table[index];
	return stack.get(key);
}

void HashTable::remove(int key)
{
	int index = hash(key);
	Stack& stack = m_table[index];
	stack.remove(key);
}

bool HashTable::find(int key)
{
	int index = hash(key);
	Stack& stack = m_table[index];
	return stack.find(key);
}

bool HashTable::isEmpty()
{
	for (int i = 0; i < m_capacity; i++) {
		if (!m_table[i].isEmpty()) {
			return false;
		}
	}
	return true;
}
void HashTable::clear()
{
	for (int i = 0; i < m_capacity; i++) {
		m_table[i].clear();
	}
}

int HashTable::getMinKey()
{
	int minKey = __INT_MAX__; // начальное значение для поиска минимума
	for (int i = 0; i < m_capacity; i++) {
		Stack& stack = m_table[i];
		for (int j = 0; j < stack.size(); j++) {
			int key = stack.getKey(j);
			if (key < minKey) {
				minKey = key;
			}
		}
	}
	return minKey;
}
