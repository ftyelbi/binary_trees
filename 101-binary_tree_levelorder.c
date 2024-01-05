#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 *@tree: pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int l = 0, r = 0;

		if (tree->r)
			r = 1 + binary_tree_height(tree->r);
		if (tree->l)
			l = 1 + binary_tree_height(tree->l);
		if (l > r)
			return (l);
		else
			return (r);
	}
	else
		return (0);
}
/**
 * print_at_level - print node, especific level
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * @level: level to print
 */
void print_at_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree && func)
	{
		if (level == 1)
			func(tree->n);
		else
		{
			print_at_level(tree->left, func, level - 1);
			print_at_level(tree->right, func, level - 1);
		}
	}

}

/**
 * binary_tree_levelorder - goes through a binary tree in level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t m = 0, n = 1;

	if (tree && func)
	{
		m = binary_tree_height(tree);
		while (n <= m + 1)
		{
			print_at_level(tree, func, n);
			n++;
		}
	}

}
