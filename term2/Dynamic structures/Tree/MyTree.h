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
	Node* add(Node* n, int key, std::string data); //������ ���������� �� ������� � ������ ������;
	Node* remove(Node* n, int key);//������� �� ������ ������ ���������� � �������� ������;
	Node* findMinElement(Node* n);
	void treeBalancing(std::vector<Node*>& tr, int b, int e);
	std::string searchNode(int key);//�� ��������� ����� ����� ���������� � ������ ������ � ����������
	void preorder(Node* n, std::vector<Node*>& tr);//������� ��� ���������� ���������� � ������� ����������� �����
	void postorder(Node* n, std::vector<Node*>& tr);//������� ��� ���������� ���������� ������ �������
	void inorder(Node* n, std::vector<Node*>& tr); //������� ��� ���������� ���������� �������� �������
	void insert(int key, std::string data);//�������� � ������ ������ ����� ������;
	Node* balance(Node* root);
	Node* leftRotate(Node* x);
	Node* rightRotate(Node* y);
	int getHeight(Node* root);
	int getBalance(Node* root);
};

class TreeForTask:MyTree {
public:
	int maxDepth(Node* root) {
		// ���� ������ ������, ���������� 0
		if (root == nullptr) {
			return 0;
		}
		// ���������� ������� ������������ ������� �����������
		int left_depth = maxDepth(root->left);
		int right_depth = maxDepth(root->right);
		// ���������� ������������ �������
		return 1 + std::max(left_depth, right_depth);
	}
};


