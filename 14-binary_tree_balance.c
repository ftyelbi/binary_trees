#include "binary_trees.h"

/**
 * measure_balanced_tree_height - Measures the height of a binary tree for a balanced tree.
 * @root: Pointer to the root of the binary tree.
 *
 * Return: The height of the balanced tree.
 */

size_t measure_balanced_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + measure_balanced_tree_height(tree->left) : 1;
			r = tree->right ? 1 + measure_balanced_tree_height(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)measure_balanced_tree_height(tree->left));
		right = ((int)measure_balanced_tree_height(tree->right));
		total = left - right;
	}
	return (total);
}
