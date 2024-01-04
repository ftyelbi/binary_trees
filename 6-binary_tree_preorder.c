#include "binary_trees.h"

/**
 * preorder_traversal - Performs pre-order traversal on a binary tree.
 * @root: Pointer to the root of the binary tree.
 * @action: Pointer to the function to be called for each node.
 */
void preorder_traversal(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	preorder_traversal(tree->left, func);
	preorder_traversal(tree->right, func);
}
