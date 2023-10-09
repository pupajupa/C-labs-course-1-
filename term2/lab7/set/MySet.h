	#ifndef MYSET_H
#define MYSET_H

#include <memory>
template <typename KeyType>
class MySet
{
private:
	enum class Color {RED, BLACK};
	struct Node;
	using NodePtr = std::shared_ptr<Node>;
	struct Node
	{
		std::pair< KeyType, char> data;
		NodePtr left;
		NodePtr right;
		NodePtr parent;
		Color color;
		Node(const std::pair<const KeyType, char>& data)
			: data(data), left(nullptr), right(nullptr), parent(nullptr), color(Color::RED){}
	};
public:
	class Iterator
	{
	public:
		Iterator() : node(nullptr){}
		explicit Iterator(NodePtr node) : node(node){}
		Iterator& operator++()
		{
			if(node->right)
			{
				node = node->right;
				while(node->left)
				{
					node = node->left;
				}
			}
			else
			{
				NodePtr parent = node->parent;
				while(parent && node == parent->right)
				{
					node = parent;
					parent = parent->parent;
				}
				node = parent;
			}
			return *this;
		}
		const std::pair< KeyType, char>& operator*() const
		{
			return node->data;
		}
		bool operator==(const Iterator& other) const
		{
			return node == other.node;
		}
		bool operator!=(const Iterator& other) const
		{
			return !(*this == other);
		}
	private:
		NodePtr node;
	};
	MySet() : root(nullptr) {}
	bool Insert(const std::pair<const KeyType, char>& data)
	{
		NodePtr parent = nullptr;
		NodePtr current = root;
		while(current)
		{
			parent = current;
			if(data.first < current->data.first)
			{
				current = current->left;
			}
			else if(data.first > current->data.first)
			{
				current = current->right;
			}
			else
			{
				return false; //нельзя повторяющиеся ключи
			}
		}
		NodePtr newNode = std::make_shared<Node>(data);
		newNode->parent = parent;
		if(!parent)
		{
			root = newNode;
		}
		else if(data.first < parent->data.first)
		{
			parent->left = newNode;
		}
		else
		{
			parent->right = newNode;
		}
		InsertFixup(newNode);
		return true;
	}

	bool Erase(const KeyType& key)
	{
		NodePtr node = FindNode(key);
		if(!node)
		{
			return false;
		}
		NodePtr y = (node->left && node->right) ? Successor(node) : node;
		NodePtr x = y->left ? y->left : y->right;
		if(x)
		{
			x->parent = y->parent;
		}
		if(!y->parent)
		{
			root = x;
		}
		else if(y == y->parent->left)
		{
			y->parent->left = x;
		}
		else
		{
			y->parent->right = x;
		}
		if(y != node)
		{
			node->data = std::move(y->data);
		}
		if(y->color == Color::BLACK)
		{
			DeleteFixup(x, y->parent);
		}
		return true;
	}

	NodePtr FindNode(const KeyType& key) const
	{
		NodePtr current = root;
		while(current)
		{
			if(key < current->data.first)
			{
				current = current->left;
			}
			else if(key > current->data.first)
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
	NodePtr  Successor(NodePtr node) const
	{
		if(node->right)
		{
			node = node->right;
			while(node->left)
			{
				node = node->left;
			}
			return node;
		}
		NodePtr parent = node->parent;
		while(parent && node == parent->right)
		{
			node = parent;
			parent = parent->parent;
		}
		return parent;
	}
	Iterator Find(const KeyType& key) const
	{
		NodePtr node = FindNode(key);
		return Iterator(node);
	}
	Iterator begin() const
	{
		NodePtr current = root;
		while(current && current->left)
		{
			current = current->left;
		}
		return Iterator(current);
	}
	Iterator end() const
	{
		return Iterator();
	}

private:
	NodePtr root;

	void LeftRotate(NodePtr x)
	{
		NodePtr y = x->right;
		x->right = y->left;
		if(y->left)
		{
			y->left->parent = x;
		}
		y->parent = x->parent;
		if(!x->parent)
		{
			root = y;
		}
		else if(x == x->parent->left)
		{
			x->parent->left = y;
		}
		else
		{
			x->parent->right = y;
		}
		y->left = x;
		x->parent = y;
	}

	void RightRotate(NodePtr y)
	{
		NodePtr x = y->left;
		y->left = x->right;
		if(x->right)
		{
			x->right->parent = y;
		}
		x->parent = y->parent;
		if(!y->parent)
		{
			root = x;
		}
		else if(y == y->parent->left)
		{
			y->parent->left = x;
		}
		else
		{
			y->parent->right = x;
		}
		x->right = y;
		y->parent = x;
	}

	void InsertFixup(NodePtr node)
	{
		while(node->parent && node->parent->color == Color::RED)
		{
			if(node->parent == node->parent->parent->left)
			{
				NodePtr y = node->parent->parent->right;
				if(y && y->color == Color::RED)
				{
					node->parent->color = Color::BLACK;
					y->color = Color::BLACK;
					node->parent->parent->color = Color::RED;
					node = node->parent->parent;
				}
				else
				{
					if(node == node->parent->right)
					{
						node = node->parent;
						LeftRotate(node);
					}
					node->parent->color = Color::BLACK;
					node->parent->parent->color = Color::RED;
					RightRotate(node->parent->parent);
				}
			}
			else
			{
				NodePtr y = node->parent->parent->left;
				if(y && y->color == Color::RED)
				{
					node->parent->color = Color::BLACK;
					y->color = Color::BLACK;
					node->parent->parent->color = Color::RED;
					node = node->parent->parent;
				}
				else
				{
					if(node == node->parent->left)
					{
						node = node->parent;
						RightRotate(node);
					}
					node->parent->color = Color::BLACK;
					node->parent->parent->color = Color::RED;
					LeftRotate(node->parent->parent);
				}
			}
		}
		root->color = Color::BLACK;
	}
	void DeleteFixup(NodePtr x, NodePtr xParent) {
		while (x != root && (!x || x->color == Color::BLACK)) {
			if (x == xParent->left) {
				NodePtr w = xParent->right;
				if (w->color == Color::RED) {
					w->color = Color::BLACK;
					xParent->color = Color::RED;
					LeftRotate(xParent);
					w = xParent->right;
				}
				if ((!w->left || w->left->color == Color::BLACK) &&
					(!w->right || w->right->color == Color::BLACK)) {
					w->color = Color::RED;
					x = xParent;
					xParent = x->parent;
				} else {
					if (!w->right || w->right->color == Color::BLACK) {
						w->left->color = Color::BLACK;
						w->color = Color::RED;
						RightRotate(w);
						w = xParent->right;
					}
					w->color = xParent->color;
					xParent->color = Color::BLACK;
					w->right->color = Color::BLACK;
					LeftRotate(xParent);
					x = root;
					xParent = nullptr;
				}
			} else {
				NodePtr w = xParent->left;
				if (w->color == Color::RED) {
					w->color = Color::BLACK;
					xParent->color = Color::RED;
					RightRotate(xParent);
					w = xParent->left;
				}
				if ((!w->right || w->right->color == Color::BLACK) &&
					(!w->left || w->left->color == Color::BLACK)) {
					w->color = Color::RED;
					x = xParent;
					xParent = x->parent;
				} else {
					if (!w->left || w->left->color == Color::BLACK) {
						w->right->color = Color::BLACK;
						w->color = Color::RED;
						LeftRotate(w);
						w = xParent->left;
					}
					w->color = xParent->color;
					xParent->color = Color::BLACK;
					w->left->color = Color::BLACK;
					RightRotate(xParent);
					x = root;
					xParent = nullptr;
				}
			}
		}
		if (x)
			x->color = Color::BLACK;
	}
};

#endif // MYSET_H
