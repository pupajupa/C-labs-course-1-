#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <string>

struct Node {
	int key = 0;
	std::string value;
	Node* next;
	int get_key(){
		return key;
	}
	Node(int key, std::string value, Node* ptr){
		this->key = key;
		this->value = value;
		next = ptr;
	}
};

class HashTable {
public:
	HashTable(int size);
	~HashTable();
	void insert(int key, std::string value);
	std::string find(int key);
	int get_size();
	int countCollisions(HashTable& table);
	void insertMod(int key, std::string value);
private:
	Node** table;
	int table_size;
	int hash(int key);
	int hash_mod(int key);
	const int PRIME = 1000000007;
};

#endif // HASHTABLE_H
