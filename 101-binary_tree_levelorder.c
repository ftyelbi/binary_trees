#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_enqueue - Enqueues a node in a binary tree
 *			level order traversal
 * @queue: Pointer to the queue
 * @node: Node to enqueue
 *
 * Return: New queue
 */
binary_tree_t **binary_tree_enqueue(binary_tree_t **queue, binary_tree_t *node)
{
	size_t i, count;
	binary_tree_t **new_queue;

	if (queue == NULL)
	return (NULL);

	count = 0;
	while (queue[count])
	count++;

	new_queue = malloc((count + 2) * sizeof(binary_tree_t *));
	if (new_queue == NULL)
	return (NULL);

	for
	(i = 0; i < count; i++)
        new_queue[i] = queue[i];

	new_queue[count] = node;
	new_queue[count + 1] = NULL;

	free(queue);
	return (new_queue);
}

/**
 * binary_tree_levelorder - Traverses a binary tree using
 *		level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t i;
	binary_tree_t **queue;

	if (tree == NULL || func == NULL)
        return;

	queue = malloc(sizeof(binary_tree_t *));
	if (queue == NULL)
	return;

	queue[0] = (binary_tree_t *)tree;
	queue[1] = NULL;

	while (queue[0]) {
	for (i = 0; queue[i]; i++) {
	func(queue[i]->value);

	if (queue[i]->left
	queue = binary_tree_enqueue(queue, queue[i]->left);

	if (queue[i]->right)
	queue = binary_tree_enqueue(queue, queue[i]->right);
	}

	free(queue);
	queue = malloc(sizeof(binary_tree_t *));
	if (queue == NULL)
	return;

	queue[0] = NULL;
	queue[1] = NULL;
	}

	free(queue);
}
