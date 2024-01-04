#include "binary_trees.h"

/**
 * count_internal_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @root: Pointer to the root of the binary tree.
 *
 * Return: Number of nodes counted, 0 if the tree is NULL.
 */
size_t count_internal_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (measure_binary_tree_size(tree) - count_tree_leaves(tree));
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
 * count_tree_leaves - Counts the leaves in a binary tree.
 * @root: Pointer to the root of the binary tree.
 *
 * Return: Number of leaves, 0 if the tree is NULL.
 */
size_t count_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (count_tree_leaves(tree->left) + count_tree_leaves(tree->right));
}
