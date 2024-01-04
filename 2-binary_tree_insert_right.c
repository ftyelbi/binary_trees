#include "binary_trees.h"

/**
 * insert_right_child - Inserts a new node as the right child in a binary tree.
 * @parent: Pointer to the parent node.
 * @value: The value to store in the new node.
 *
 * Description: If the parent already has a right child, the new node
 * must take its place, and the old right child must be set as the
 * right child of the new node.
 *
 * Return: A pointer to the created node, or NULL on failure or if
 *         the parent is NULL.
 */

binary_tree_t *insert_right_child(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
