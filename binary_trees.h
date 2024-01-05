#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <limits.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* binary_tree_print.c */
void binary_tree_print(const binary_tree_t *);

/* tasks */
int is_leaf_node(const binary_tree_t *node);
int is_root_node(const binary_tree_t *node);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);

binary_tree_t *create_binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *insert_left_child(binary_tree_t *parent, int value);
binary_tree_t *insert_right_child(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

size_t measure_binary_tree_height(const binary_tree_t *tree);
size_t measure_binary_tree_depth(const binary_tree_t *tree);
size_t measure_binary_tree_size(const binary_tree_t *tree);
size_t is_leaf_node(const binary_tree_t *tree);
size_t count_internal_nodes(const binary_tree_t *tree);

void preorder_traversal(const binary_tree_t *tree, void (*func)(int));
void inorder_traversal(const binary_tree_t *tree, void (*func)(int));
void postorder_traversalconst binary_tree_t *tree, void (*func)(int));
void delete_binary_tree(binary_tree_t *tree);


/* Advanced tasks */
avl_t *avl_insert(avl_t **tree, int value);
avl_t *array_to_avl(int *array, size_t size);
avl_t *avl_remove(avl_t *root, int value);
avl_t *sorted_array_to_avl(int *array, size_t size);

int binary_tree_is_bst(const binary_tree_t *tree);
int binary_tree_is_heap(const binary_tree_t *tree);
int heap_extract(heap_t **root);
int *heap_to_sorted_array(heap_t *heap, size_t *size);
int binary_tree_is_complete(const binary_tree_t *tree);
int binary_tree_is_avl(const binary_tree_t *tree);

bst_t *bst_insert(bst_t **tree, int value);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_search(const bst_t *tree, int value);
bst_t *bst_remove(bst_t *root, int value);

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

heap_t *heap_insert(heap_t **root, int value);
heap_t *array_to_heap(int *array, size_t size);

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* helper functions */
int _pow_recursion(int x, int y);
int btic_helper(const binary_tree_t *tree, size_t index, size_t size);
int btib_helper(const binary_tree_t *tree, int low, int hi);
int btia_helper(const binary_tree_t *tree, int low, int hi);
int btih_helper(const binary_tree_t *tree);

bst_t *bst_min_val(bst_t *root);
binary_tree_t *bta_helper(binary_tree_t *root, const binary_tree_t *first,
	const binary_tree_t *second);
void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level);
void sata_helper(avl_t **root, int *array, size_t lo, size_t hi);

#endif
