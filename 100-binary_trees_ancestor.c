#include "binary_trees.h"

/**
 * measure_binary_tree_depth - Measures the depth of a node in a binary tree.
 * @node: Pointer to the node to measure the depth.
 *
 * Return: Depth of the node, 0 if the node or its parent is NULL.
 */
size_t measure_binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + measure_binary_tree_depth(tree->parent));
}
/**
 * find_lowest_common_ancestor - Finds the lowest common ancestor of two nodes in a binary tree.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor,
 *         NULL if either node is NULL or if they are not in the same tree.
 */
binary_tree_t *find_lowest_common_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t height_f = 0, height_s = 0;
	const binary_tree_t *aux = NULL;

	height_f = measure_binary_tree_depth(first);
	height_s = measure_binary_tree_depth(second);
	if (height_f && height_s)
	{
		if (height_f > height_s)
		{
			aux = first;
			first = second;
			second = aux;
		}
		while (first)
		{
			aux = second;
			while (aux)
			{
				if (first == aux)
					return ((binary_tree_t *)first);
				aux = aux->parent;
			}
			first = first->parent;
		}
	}
	else
	{
		return (NULL);
	}
	return (NULL);
}
