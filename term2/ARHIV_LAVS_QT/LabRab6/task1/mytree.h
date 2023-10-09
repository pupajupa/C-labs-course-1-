#ifndef MYTREE_H
#define MYTREE_H
#include <string>
#include <vector>
#pragma once

struct Node {
	int key;
	std::string data;
	Node* left;
	Node* right;
	Node(std::string, int);
};
class MyTree
{
private:
	Node* root;
	void destroyNode(Node* node);
public:
	MyTree();
	void clear();
	~MyTree();
	Node* receiveRoot();
	Node* add(Node* n, int key, std::string data); //внести информацию из массива в дерево поиска;
	void add(std::string data, int key);
	Node* remove(Node* n, int key);//удалить из дерева поиска информацию с заданным ключом;
	Node* findMinElement(Node* n);
	std::string searchNode(int key);//по заданному ключу найти информацию в дереве поиска и отобразить
	void preorder(Node* n, std::vector<Node*>& tr);//функция для распечатки информации в порядке возрастания ключа
	void postorder(Node* n, std::vector<Node*>& tr);//функция для распечатки информации прямым обходом
	void inorder(Node* n, std::vector<Node*>& tr); //функция для распечатки информации обратным обходом
	void insert(int key, std::string data);//добавить в дерево поиска новую запись;
	void balance(std::vector<Node*>& nodes, int start, int end);
	Node* leftRotate(Node* x);
	void remove(int key);
	Node* rightRotate(Node* y);
	int getHeight(Node* root);
	int getBalance(Node* root);
	void balance();
};



#endif // MYTREE_H
