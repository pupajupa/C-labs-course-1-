#ifndef MYMAP_H
#define MYMAP_H
#include <algorithm>
#include <memory>
#include <utility>
template <typename KeyType, typename ValueType>
class MyMap
{
private:
	enum class Color{RED, BLACK};
	struct Node
	{
		std::pair<KeyType, ValueType> data;
		Node* parent;
		Node* left;
		Node* right;
		Color color;
		Node* prev;
		Node* next;

		Node(const std::pair<const KeyType, ValueType>& data,
			 Node* parent = nullptr,
			 Node* left = nullptr,
			 Node* right = nullptr,
			 Color color = Color::RED)
			: data(data), parent(parent), left(left), right(right), color(color){}
	};
public:
	class Iterator
	{
	public:
		Iterator(Node* node) : node(node){}
		std::pair< KeyType, ValueType>& operator*() const
		{
			return node->data;
		}
		Iterator& operator++()
		{
			if(node->right != nullptr)
			{
				node = node->right;
				while(node->left != nullptr)
				{
					node = node->left;
				}
			}
			else
			{
				Node* parent = node->parent;
				while(parent != nullptr && node == parent->right)
				{
					node = parent;
					parent = parent->parent;
				}
				node = parent;
			}
			return *this;
		}
		bool operator==(const Iterator& other) const
		{
			return node == other.node;
		}
		bool operator!=(const Iterator& other) const
		{
			return node != other.node;
		}
	private:
		Node* node;
	};

	MyMap() : root(nullptr), size(0) {}
	~MyMap()
	{
		clear();
	}

	void insert(const std::pair<const KeyType, ValueType>& data)
	{
		Node* current = root;
		Node* prev = nullptr;
		while (current != nullptr) {
			prev = current;
			if (data.first < current->data.first) {
				current = current->left;
			} else {
				current = current->right;
			}
		}

		Node* newNode = createNode(data);
		newNode->parent = prev;
		if (prev == nullptr) {
			root = newNode;
		} else if (data.first < prev->data.first) {
			prev->left = newNode;
		} else {
			prev->right = newNode;
		}

		newNode->prev = prev;
		newNode->next = nullptr;

		if (prev != nullptr) {
			if (newNode->data.first < prev->data.first) {
				while (prev->prev != nullptr && newNode->data.first < prev->prev->data.first) {
					prev = prev->prev;
				}
			} else {
				while (prev->next != nullptr && newNode->data.first > prev->next->data.first) {
					prev = prev->next;
				}
			}

			if (newNode->data.first < prev->data.first) {
				newNode->next = prev;
				newNode->prev = prev->prev;
				if (prev->prev != nullptr) {
					prev->prev->next = newNode;
				}
				prev->prev = newNode;
			} else {
				newNode->prev = prev;
				newNode->next = prev->next;
				if (prev->next != nullptr) {
					prev->next->prev = newNode;
				}
				prev->next = newNode;
			}
		}
		size++;
	}
	void erase(const KeyType& key)
	{
		Node* node = findNode(key);
		if(node == nullptr)
		{
			return;
		}
		Node* replacement = nullptr;
		if(node->left != nullptr && node->right!= nullptr)
		{
			Node* successor = node->right;
			while(successor->left != nullptr)
			{
				successor = successor->left;
			}
			replacement = successor;
			node->data = std::move(successor->data);
			node = successor;
		}
		Node* child = (node->left != nullptr) ? node->left : node->right;
		Color original_color = node->color;
		if(child != nullptr)
		{
			child->parent = node->parent;
			if(node->parent == nullptr)
			{
				root = child;
			}
			else if(node == node->parent->left)
			{
				node->parent->left = child;
			}
			else
			{
				node->parent->right = child;
			}
			if(original_color == Color::BLACK)
			{
				balanceAfterErase(child);
			}
		}
		else if(node->parent == nullptr)
		{
			root = nullptr;
		}
		else
		{
			if(original_color == Color::BLACK)
			{
				balanceAfterErase(node);
			}
			if(node->parent != nullptr)
			{
				if(node == node->parent->left)
				{
					node->parent->left = nullptr;
				}
				else if(node == node->parent->right)
				{
					node->parent->right = nullptr;
				}
			}
		}
		delete node;
		--size;
	}
	ValueType& operator[](const KeyType& key)
	{
		Node* node = findNode(key);
		if(node == nullptr)
		{
			std::pair<const KeyType, ValueType> data(key, ValueType());
			insert(data);
			node = findNode(key);
		}
		return node->data.second;
	}
	Iterator find(const KeyType& key)
	{
		Node* node = findNode(key);
		return Iterator(node);
	}
	Iterator begin()
	{
		Node* leftmost = root;
		while(leftmost != nullptr && leftmost->left != nullptr)
		{
			leftmost = leftmost->left;
		}
		return Iterator(leftmost);
	}
	Iterator end()
	{
		return Iterator(nullptr);
	}
	void clear()
	{
		deleteSubtree(root);
		root = nullptr;
		size = 0;
	}
	bool empty() const
	{
		return size == 0;
	}
	std::size_t getSize() const
	{
		return size;
	}


private:
	Node* root;
	std::size_t size;

	Node* createNode(const std::pair<const KeyType, ValueType>& data)
	{
		return new Node(data);
	}
	Node* findNode(const KeyType& key)
	{
		Node* current = root;
		while(current != nullptr)
		{
			if(key < current->data.first)
			{
				current = current->left;
			}
			else if (key > current->data.first)
			{
				current = current->right;
			}
			else
			{
				return current;
			}
		}
		return nullptr;
	}
	void balanceAfterInsert(Node* node)
	{
		while(node != root && node->parent->color == Color::RED)
		{
			if(node->parent == node->parent->parent->left)
			{
				Node* uncle = node->parent->parent->right;
				if(uncle != nullptr && uncle->color == Color::RED)
				{
					node->parent->color = Color::BLACK;
					uncle->color = Color::BLACK;
					node->parent->parent->color = Color::RED;
					node = node->parent->parent;
				}
				else
				{
					if(node == node->parent->right)
					{
						node = node->parent;
						rotateLeft(node);
					}
					node->parent->color = Color::BLACK;
					node->parent->parent->color = Color::RED;
					rotateRight(node->parent->parent);
				}
			}
			else
			{
				Node* uncle = node->parent->parent->left;
				if(uncle != nullptr && uncle->color == Color::RED)
				{
					node->parent->color = Color::BLACK;
					uncle->color = Color::BLACK;
					node->parent->parent->color = Color::RED;
					node = node->parent->parent;
				}
				else
				{
					if(node == node->parent->left)
					{
						node = node->parent;
						rotateRight(node);
					}
					node->parent->color = Color::BLACK;
					node->parent->parent->color = Color::RED;
					rotateLeft(node->parent->parent);
				}
			}
		}
		root->color = Color::BLACK;
	}
	void balanceAfterErase(Node* node)
	{
		while (node != root && node->color == Color::BLACK) {
			if (node == node->parent->left) {
				Node* sibling = node->parent->right;
				if (sibling->color == Color::RED) {
					sibling->color = Color::BLACK;
					node->parent->color = Color::RED;
					rotateLeft(node->parent);
					sibling = node->parent->right;
				}
				if (sibling->left->color == Color::BLACK && sibling->right->color == Color::BLACK) {
					sibling->color = Color::RED;
					node = node->parent;
				} else {
					if (sibling->right->color == Color::BLACK) {
						sibling->left->color = Color::BLACK;
						sibling->color = Color::RED;
						rotateRight(sibling);
						sibling = node->parent->right;
					}
					sibling->color = node->parent->color;
					node->parent->color = Color::BLACK;
					sibling->right->color = Color::BLACK;
					rotateLeft(node->parent);
					node = root;
				}
			} else {
				Node* sibling = node->parent->left;
				if (sibling->color == Color::RED) {
					sibling->color = Color::BLACK;
					node->parent->color = Color::RED;
					rotateRight(node->parent);
					sibling = node->parent->left;
				}
				if (sibling->left->color == Color::BLACK && sibling->right->color == Color::BLACK) {
					sibling->color = Color::RED;
					node = node->parent;
				} else {
					if (sibling->left->color == Color::BLACK) {
						sibling->right->color = Color::BLACK;
						sibling->color = Color::RED;
						rotateLeft(sibling);
						sibling = node->parent->left;
					}
					sibling->color = node->parent->color;
					node->parent->color = Color::BLACK;
					sibling->left->color = Color::BLACK;
					rotateRight(node->parent);
					node = root;
				}
			}
		}

		node->color = Color::BLACK;
	}
	void rotateLeft(Node* node)
	{
		Node* right_child = node->right;
		node->right = right_child->left;
		if(right_child->left != nullptr)
		{
			right_child->left->parent = node;
		}
		right_child->parent = node->parent;
		if(node->parent == nullptr)
		{
			root = right_child;
		}
		else if(node == node->parent->left)
		{
			node->parent->left = right_child;
		}
		else
		{
			node->parent->right = right_child;
		}
		right_child->left = node;
		node->parent = right_child;
	}
	void rotateRight(Node* node) {
		Node* left_child = node->left;
		node->left = left_child->right;
		if (left_child->right != nullptr) {
			left_child->right->parent = node;
		}
		left_child->parent = node->parent;
		if (node->parent == nullptr) {
			root = left_child;
		} else if (node == node->parent->left) {
			node->parent->left = left_child;
		} else {
			node->parent->right = left_child;
		}
		left_child->right = node;
		node->parent = left_child;
	}
	void deleteSubtree(Node* node)
	{
		if(node != nullptr)
		{
			deleteSubtree(node->left);
			deleteSubtree(node->right);
			delete node;
		}
	}
};
#endif // MYMAP_H
