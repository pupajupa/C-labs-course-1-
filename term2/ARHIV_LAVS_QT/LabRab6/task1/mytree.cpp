#include "mytree.h"

void MyTree::destroyNode(Node* node)
{
	if (node) {
		destroyNode(node->left);
		destroyNode(node->right);
		delete node;
	}
}

MyTree::MyTree()
{
	root = nullptr;
}

MyTree::~MyTree()
{
	destroyNode(root);
}

Node* MyTree::receiveRoot()
{
	return root;
}

void MyTree::add(std::string data, int key)
{
	root = add(root, key,data);
}

Node* MyTree::add(Node* n, int key, std::string data)
{
	if (n == nullptr) {
		return new Node(data,key);
	}
	if (key < n->key) {
		n->left = add(n->left, key, data);
	}
	else {
		n->right = add(n->right, key, data);
	}
	return n;
}

Node* MyTree::remove(Node* n, int key)
{
	// если нашли нужный элемент, начинаем процедуру удаления
	if (n->key == key) {
		// обработка самого простого случая, вместо узла возвращается null
		if (n->left == nullptr && n->right == nullptr) {
			return nullptr;
		}
		// обработка двух случаев, с только одним из поддеревьев
		if (n->left == nullptr) {
			return n->right;
		}

		if (n->right == nullptr) {
			return n->left;
		}
		Node* minNodeInRightSubtree = this->findMinElement(n->right);
		// заменили текущий элемент минимальным из правого поддерева
		n->key = minNodeInRightSubtree->key;

		// ищем в правом поддереве минимальный элемент,
		// значение которого уже вставлено на место текущего
		n->right = this->remove(n->right, minNodeInRightSubtree->key);
		return n;
	}

	// попадаем сюда, если элемент не был найден,
	// просто проваливаемся в дерево глубже и глубже

	// производится рекурсивный вызов этой же функции,
	// при этом если элемент не будет найден,
	// то алгоритм просто будет возвращать существующую ссылку на поддерево,
	// которая присвоится в ту же позицию
	if (key < n->key) {
		if (n->left == nullptr) {
			return n;
		}

		// проваливаемся в левое поддерево,
		// после рекурсивной отработки функции
		// будет возвращен текущий элемент,
		// который в предыдущем вызове будет присвоен
		n->left = this->remove(n->left, key);

		// присваивание на рекурсивный уровень выше,
		// может быть как в левое поддерево,так и в правое,
		// на текущем уровне мы не знаем какое поддерево обрабатываем
		return n;
	}

	// аналогичная обработка для правого поддерева
	if (key > n->key) {
		if (n->right == nullptr) {
			return n;
		}

		n->right = this->remove(n->right, key);
		return n;
	}
}

Node* MyTree::findMinElement(Node* n)
{
	if (n->left == nullptr)
		return n;
	return this->findMinElement(n->left);
}

std::string MyTree::searchNode(int key)
{
	Node* node = receiveRoot();
	while(node != nullptr)
	{
		if(key == node->key)
			return node->data;
		else if(key < node->key)
			node = node->left;
		else
			node = node->right;
	}
	return "";
}
void MyTree::clear()
{
	destroyNode(root);
	root = nullptr;
}

void MyTree::preorder(Node* n, std::vector<Node*>& tr)
{
	if (n == nullptr)
		return;
	tr.push_back(n);
	preorder(n->left, tr);
	preorder(n->right, tr);
}

void MyTree::postorder(Node* n, std::vector<Node*>& tr)
{
	if (n == nullptr)
		return;
	postorder(n->left, tr);
	postorder(n->right, tr);
	tr.push_back(n);
}

void MyTree::inorder(Node* n, std::vector<Node*>& tr)
{
	if (n == nullptr)
		return;
	inorder(n->left, tr);
	tr.push_back(n);
	inorder(n->right, tr);
}

void MyTree::insert(int key, std::string data)
{
	Node** cur = &root;
	while (*cur) {
		Node& node = **cur;
		if (key < node.key) {

		}
		else if (key > node.key) {
			cur = &node.right;
		}
		else {
			return;
		}
	}
	*cur = new Node(data, key);
}
void MyTree::balance(std::vector<Node*>& nodes, int start, int end)
{
	if(start > end)
		return;
	int mid = (start + end) / 2;
	Node* node = nodes[mid];
	add(node->data, node->key);
	balance(nodes, start, mid - 1);
	balance(nodes, mid + 1, end);
}
void MyTree::balance()
{
	std::vector<Node*> nodes;
	inorder(root, nodes);
//    destroy(root);
	root = nullptr;
	balance(nodes, 0, nodes.size()-1);
}
Node* MyTree::leftRotate(Node* x)
{
	Node* y = x->right;
	Node* t2 = y->left;
	y->left = x;
	x->right = t2;
	return y;
}
void MyTree::remove(int key)
{
	root = remove(root, key);
}
Node* MyTree::rightRotate(Node* y)
{
	Node* x = y->left;
	Node* t2 = x->right;
	x->right = y;
	y->left = t2;
	return x;
}
int MyTree::getHeight(Node* root)
{
	if (!root) {
		return 0;
	}
	return 1 + std::max(getHeight(root->left), getHeight(root->right));
}
int MyTree::getBalance(Node* root)
{
	if (!root) {
		return 0;
	}
	return getHeight(root->left) - getHeight(root->right);
}
Node::Node(std::string data, int key){
	this->data = data;
	this->key=key;
	left = nullptr;
	right = nullptr;
}


