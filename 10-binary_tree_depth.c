#include "binary_trees.h"

/**
 * measure_binary_tree_depth - Measures the depth of a node in a binary tree.
 * @node: Pointer to the node to measure the depth.
 *
 * Return: Depth of the node, 0 if the node or its parent is NULL.
 */
size_t measure_binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + measure_binary_tree_depth(tree->parent));
}
