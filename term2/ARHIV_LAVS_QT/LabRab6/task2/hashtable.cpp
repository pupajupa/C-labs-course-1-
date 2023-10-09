#include "hashtable.h"

HashTable::HashTable(int size)
{
		table_size = size;
		table = new Node*[size];
		for (int i = 0; i < size; i++) {
			table[i] = nullptr;
		}
}

HashTable::~HashTable()
{
	for (int i = 0; i < table_size; i++) {
		Node* node = table[i];
		while (node != nullptr) {
			Node* next_node = node->next;
			delete node;
			node = next_node;
		}
	}
	delete[] table;
}

void HashTable::insert(int key, std::string value)
{
	int index = hash(key);
	Node* node = table[index];
	while (node != nullptr) {
		if (node->key == key) {
			node->value = value;
			return;
		}
		node = node->next;
	}
	node = new Node{key, value, table[index]};
	table[index] = node;
}

void HashTable::insertMod(int key, std::string value)
{
	int index = hash_mod(key);
	Node* node = table[index];
	while (node != nullptr) {
		if (node->key == key) {
			node->value = value;
			return;
		}
		node = node->next;
	}
	node = new Node{key, value, table[index]};
	table[index] = node;
}

std::string HashTable::find(int key)
{
	int index = hash(key);
	Node* node = table[index];
	while (node != nullptr) {
		if (node->key == key) {
			return node->value;
		}
		node = node->next;
	}
	return "";
}

int HashTable::hash(int key)
{
	// используем универсальное хеширование
	int a = rand() % (table_size - 1) + 1;
	int b = rand() % (table_size - 1);
	return ((a * key + b) % PRIME) % table_size;
}

int HashTable::hash_mod(int key)
{
	// используем модульное хеширование
	  return key % table_size;
}
int HashTable::countCollisions(HashTable& table) {
	int collisions = 0;
	for (int i = 0; i < table_size; i++) {
		Node* current = table.table[i];
		while (current != nullptr) {
			std::string value = find(current->get_key());
			if (value != "") {
				collisions++;
			}
			current = current->next;
		}
	}
	return collisions;
}
int HashTable::get_size() {
	int count = 0;
	for (int i = 0; i < table_size; i++) {
		Node* current = table[i];
		while (current != nullptr) {
			count++;
			current = current->next;
		}
	}
	return count;
}
