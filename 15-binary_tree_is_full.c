#include "binary_trees.h"

/**
 * binary_tree_is_full - Func that checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: returns 1 if tree is full else 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree) == 1)
		return (1);
	if (binary_tree_is_root(tree) == 1)
		return (0);
	if (binary_tree_is_full(tree->left) == 1 &&
	binary_tree_is_full(tree->right) == 1)
		return (1);
	return (0);
}
