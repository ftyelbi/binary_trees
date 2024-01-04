#include "binary_trees.h"

/**
 * insert_left_child - Inserts a new node as the left child in a binary tree.
 * @parent: Pointer to the parent node.
 * @value: The value to store in the new node.
 *
 * Return: Pointer to the created left child node, or NULL on failure
 *         or if the parent is NULL.
 */
binary_tree_t *insert_left_child(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}
	return (node);
}
