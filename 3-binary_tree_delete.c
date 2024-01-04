#include "binary_trees.h"

/**
 * delete_binary_tree - Deletes an entire binary tree.
 * @root: A pointer to the root node of the tree to delete.
 *
 * Description: If the root is NULL, do nothing.
 */

void delete_binary_tree(binary_tree_t *tree)
{
	if (!tree)
		return;
	delete_binary_tree(tree->right);
	delete_binary_tree(tree->left);
	free(tree);
}
