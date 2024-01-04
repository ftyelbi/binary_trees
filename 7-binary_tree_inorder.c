#include "binary_trees.h"

/**
 * inorder_traversal - Performs in-order traversal on a binary tree.
 * @root: Pointer to the root of the binary tree.
 * @action: Pointer to the function to be called for each node.
 */
void inorder_traversal(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	inorder_traversal(tree->left, func);
	func(tree->n);
	inorder_traversal(tree->right, func);
}
