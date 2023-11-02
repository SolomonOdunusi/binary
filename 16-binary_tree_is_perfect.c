#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Func that checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: returns 1 if tree is perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree) == 1)
		return (1);
	if (binary_tree_is_root(tree) == 1)
	{
		if (binary_tree_is_perfect(tree->left) == 1 &&
			binary_tree_is_perfect(tree->right) == 1)
			return (1);
		else
			return (0);
	}
	if (binary_tree_is_perfect(tree->left) == 1 &&
	binary_tree_is_perfect(tree->right) == 1 &&
	binary_tree_sibling(tree) != NULL &&
	binary_tree_uncle(tree) != NULL)
		return (1);
	else
		return (0);
}
