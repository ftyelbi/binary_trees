#include "binary_trees.h"

/**
 * measure_binary_tree_size - Measures the size of a binary tree.
 * @root: Pointer to the root node of the tree to measure the size.
 *
 * Return: Size of the tree, 0 if the tree is NULL.
 */
size_t measure_binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t n_left, n_right;

		n_left = measure_binary_tree_size(tree->left);
		n_right = measure_binary_tree_size(tree->right);
		return (1 + n_left + n_right);
	}
}
