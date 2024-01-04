#include "binary_trees.h"

/**
 * is_leaf_node - Checks if a node in a binary tree is a leaf.
 * @node: Node to check.
 *
 * Return: 1 if the node is a leaf, 0 otherwise or if the node is NULL.
 */
int is_leaf_node(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
