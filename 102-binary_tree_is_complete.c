#include "binary_trees.h"

/**
 * binary_tree_is_complete - Func that checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * Return: returns 1 if tree is complete else 0
*/
int binary_tree_is_complete(const binary_tree_t *tree)
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
