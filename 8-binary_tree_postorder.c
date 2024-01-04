#include "binary_trees.h"

/**
 * postorder_traversal - Performs post-order traversal on a binary tree.
 * @root: Pointer to the root of the binary tree.
 * @action: Pointer to the function to be called for each node.
 */
void postorder_traversal(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	postorder_traversal(tree->left, func);
	postorder_traversal(tree->right, func);
	func(tree->n);
}
