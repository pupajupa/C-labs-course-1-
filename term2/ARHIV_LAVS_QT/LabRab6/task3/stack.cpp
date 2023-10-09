#include "stack.h"

void Stack::push(int key, int value)
{
	m_keys.push_back(key);
	m_values.push_back(value);
}

int Stack::get(int key)
{
	for (int i = m_keys.size() - 1; i >= 0; i--) {
		if (m_keys[i] == key) {
			return m_values[i];
		}
	}
	return -1; // not found
}

void Stack::remove(int key)
{
	for (int i = m_keys.size() - 1; i >= 0; i--) {
		if (m_keys[i] == key) {
			m_keys.erase(m_keys.begin() + i);
			m_values.erase(m_values.begin() + i);
			break;
		}
	}
}
void Stack::print(QTextEdit* textedit)
{
	for(int i = m_keys.size(); i >= 0; i--)
	{
		textedit->append(QString::number(m_keys[i]) + " ");
	}
	textedit->append("");
}
bool Stack::find(int key)
{
	for (int i = m_keys.size() - 1; i >= 0; i--) {
		if (m_keys[i] == key) {
			return true;
		}
	}
	return false;
}

bool Stack::isEmpty()
{
	return m_keys.empty();
}

int Stack::getKey(int index)
{
	return m_keys[index];
}

int Stack::size()
{
	return m_keys.size();
}

void Stack::clear()
{
	m_keys.clear();
	m_values.clear();
}
