#include "binary_trees.h"

/**
 * find_binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node,
 *         NULL if the node is NULL,
 *         NULL if the parent is NULL,
 *         NULL if the node has no uncle.
 */
binary_tree_t *find_binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (find_binary_tree_sibling(node->parent));
}

/**
 * find_binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node,
 *         NULL if the node is NULL,
 *         NULL if the parent is NULL,
 *         NULL if the node has no siblings.
 */
binary_tree_t *find_binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
