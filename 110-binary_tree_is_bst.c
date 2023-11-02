#include "binary_trees.h"

/**
 * binary_tree_is_bst - Func that checks if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check
 * Return: returns 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_root(tree) == 1)
		return (1);
	if (binary_tree_is_full(tree) == 1)
		return (1);
	if (binary_tree_is_perfect(tree) == 1)
		return (1);
	return (0);
}
