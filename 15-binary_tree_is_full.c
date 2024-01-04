#include "binary_trees.h"

/**
 * check_binary_tree_fullness - Checks if a binary tree is full.
 * @root: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 if the tree is not full or if the tree is NULL.
 */
int check_binary_tree_fullness(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (check_binary_tree_fullness(tree->left) &&
			check_binary_tree_fullness(tree->right));

	return (0);
}
