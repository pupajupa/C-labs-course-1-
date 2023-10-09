#ifndef TREEFORTASK_H
#define TREEFORTASK_H
#include <mytree.h>

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

#endif // TREEFORTASK_H
