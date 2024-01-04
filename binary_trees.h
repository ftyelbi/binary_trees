#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
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
binary_tree_t *create_binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *insert_left_child(binary_tree_t *parent, int value);
binary_tree_t *insert_right_child(binary_tree_t *parent, int value);
void delete_binary_tree(binary_tree_t *tree);
int is_leaf_node(const binary_tree_t *node);
int is_root_node(const binary_tree_t *node);
void preorder_traversal(const binary_tree_t *tree, void (*func)(int));
void inorder_traversal(const binary_tree_t *tree, void (*func)(int));
void postorder_traversal(const binary_tree_t *tree, void (*func)(int));
size_t measure_binary_tree_height(const binary_tree_t *tree);
size_t measure_binary_tree_depth(const binary_tree_t *tree);
size_t measure_binary_tree_size(const binary_tree_t *tree);
size_t count_tree_leaves(const binary_tree_t *tree);
size_t count_internal_nodes(const binary_tree_t *tree);
int measure_balanced_tree_height(const binary_tree_t *tree);
int check_binary_tree_fullness(const binary_tree_t *tree);
int check_binary_tree_perfection(const binary_tree_t *tree);
binary_tree_t *find_binary_tree_sibling(binary_tree_t *node);
binary_tree_t *find_binary_tree_uncle(binary_tree_t *node);

/* Advanced tasks */
binary_tree_t *find_lowest_common_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second);
void binary_tree_level_order_t(const binary_tree_t *tree, void (*func)(int));
int is_binary_tree_complete(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);
bst_t *bst_insert(bst_t **tree, int value);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_search(const bst_t *tree, int value);
bst_t *bst_remove(bst_t *root, int value);
int binary_tree_is_avl(const binary_tree_t *tree);
avl_t *avl_insert(avl_t **tree, int value);
avl_t *array_to_avl(int *array, size_t size);
avl_t *avl_remove(avl_t *root, int value);
avl_t *sorted_array_to_avl(int *array, size_t size);
int binary_tree_is_heap(const binary_tree_t *tree);
heap_t *heap_insert(heap_t **root, int value);
heap_t *array_to_heap(int *array, size_t size);
int heap_extract(heap_t **root);
int *heap_to_sorted_array(heap_t *heap, size_t *size);

/* helper functions */
int power_recursion(int x, int y);
binary_tree_t *bta_helper(binary_tree_t *root, const binary_tree_t *first,
			  const binary_tree_t *second);
void btlo_helper(const binary_tree_t *tree, void (*func)(int), size_t level);
int btic_helper(const binary_tree_t *tree, size_t index, size_t size);
int btib_helper(const binary_tree_t *tree, int low, int hi);
bst_t *bst_min_val(bst_t *root);
int btia_helper(const binary_tree_t *tree, int low, int hi);
int btih_helper(const binary_tree_t *tree);
void sata_helper(avl_t **root, int *array, size_t lo, size_t hi);

#endif
