#include "binary_trees.h"

/**
 * binary_tree_is_root - to check if a node is a root
 *
 * @node: which node to check
 *
 * Return: if node is a root is  1
 *         0 if not a root
 *         0 if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
