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
	~MyTree();
	Node* receiveRoot();
	Node* add(Node* n, int key, std::string data); //внести информацию из массива в дерево поиска;
	Node* remove(Node* n, int key);//удалить из дерева поиска информацию с заданным ключом;
	Node* findMinElement(Node* n);
	void treeBalancing(std::vector<Node*>& tr, int b, int e);
	std::string searchNode(int key);//по заданному ключу найти информацию в дереве поиска и отобразить
	void preorder(Node* n, std::vector<Node*>& tr);//функция для распечатки информации в порядке возрастания ключа
	void postorder(Node* n, std::vector<Node*>& tr);//функция для распечатки информации прямым обходом
	void inorder(Node* n, std::vector<Node*>& tr); //функция для распечатки информации обратным обходом
	void insert(int key, std::string data);//добавить в дерево поиска новую запись;
	Node* balance(Node* root);
	Node* leftRotate(Node* x);
	Node* rightRotate(Node* y);
	int getHeight(Node* root);
	int getBalance(Node* root);
};

class TreeForTask:MyTree {
public:
	int maxDepth(Node* root) {
		// Если дерево пустое, возвращаем 0
		if (root == nullptr) {
			return 0;
		}
		// Рекурсивно находим максимальную глубину поддеревьев
		int left_depth = maxDepth(root->left);
		int right_depth = maxDepth(root->right);
		// Возвращаем максимальную глубину
		return 1 + std::max(left_depth, right_depth);
	}
};


