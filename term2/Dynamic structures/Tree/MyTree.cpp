#include "MyTree.h"

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

Node* MyTree::add(Node* n, int key, std::string data)
{
	if (n == nullptr) {
		return new Node(data,key);
	}
	if (key < n->key) {
		n->left = add(n->left, key, data);
	}
	else if (key > n->key) {
		n->right = add(n->right, key, data);
	}
	else {
		return;
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

void MyTree::treeBalancing(std::vector<Node*>& tr, int b, int e)
{
}

std::string MyTree::searchNode(int key)
{
	return std::string();
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
Node* MyTree::balance(Node* root)
{
    int balance = getBalance(root);
    if (balance > 1) {
        if (getBalance(root->left) >= 0) {
            return rightRotate(root);
        }
        else {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }
    }
    else if (balance < -1) {
        if (getBalance(root->right) <= 0) {
            return leftRotate(root);
        }
        else {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }
    }
    return root;
}

Node* MyTree::leftRotate(Node* x)
{
    Node* y = x->right;
    Node* t2 = y->left;
    y->left = x;
    x->right = t2;
    return y;
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
Node::Node(std::string data, int key) :data(data), key(key), left(nullptr), right(nullptr) {}

