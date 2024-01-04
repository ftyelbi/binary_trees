#include "binary_trees.h"

/**
 * delete_binary_tree - Deletes an entire binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * Description: If the root is NULL, do nothing.
 */
void delete_binary_tree(binary_tree_t *tree)
{
	/*Check if the current node is NULL*/
	if (!tree)
	return;

	/*Recursively delete the right subtree*/
	delete_binary_tree(tree->right);

	/*Recursively delete the left subtree*/
	delete_binary_tree(tree->left);

	/* Free the memory of the current node*/
	free(tree);
}
