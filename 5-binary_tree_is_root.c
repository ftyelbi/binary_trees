#include "binary_trees.h"

/**
 * is_root_node - Checks if a node in a binary tree is a root.
 * @node: Node to check.
 *
 * Return: 1 if the node is a root, 0 otherwise or if the node is NULL.
 */
int is_root_node(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
