#include "binary_trees.h"

/**
 * is_leaf_node - Checks if a node is a leaf in a binary tree.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, otherwise 0.
 */
int is_leaf_node(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

/**
 * count_tree_leaves - Counts the number of leaves in a binary tree.
 * @root: Pointer to the root node of the tree.
 *
 * Return: If the tree is NULL, the function must return 0.
 */
size_t count_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (is_leaf_node(tree) +
			count_tree_leaves(tree->right) +
			count_tree_leaves(tree->left));

}
