#include <stddef.h>
#include "binary_trees.h"

/**
 * measure_binary_tree_height - Measures the height of a binary tree.
 * @root: Pointer to the root of the binary tree.
 *
 * Return: Height of the tree, 0 if the tree is NULL.
 */
size_t measure_binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + measure_binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + measure_binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * measure_binary_tree_size - Measures the size of a binary tree.
 * @root: Pointer to the root node of the tree.
 *
 * Return: Size of the tree, 0 if the tree is NULL.
 */
size_t measure_binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (measure_binary_tree_size(tree->left) + measure_binary_tree_size(tree->right) + 1);
}

/**
 * power_recursion - Returns the value of x raised to the power of y.
 * @x: The value to exponentiate.
 * @y: The power to raise x to.
 *
 * Return: x to the power of y, or -1 if y is negative.
 */

int power_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * power_recursion(x, y - 1));
}

/**
 * check_binary_tree_perfection - Checks if a binary tree is perfect.
 * @root: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 if the tree is not perfect or if the tree is NULL.
 */
int check_binary_tree_perfection(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = measure_binary_tree_height(tree);
	nodes = measure_binary_tree_size(tree);

	power = (size_t)power_recursion(2, height + 1);
	return (power - 1 == nodes);
}
