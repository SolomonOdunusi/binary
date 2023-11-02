#include "binary_trees.h"

/**
 * binary_tree_balance - Func that measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: returns the balance factor of a binary tree or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
	return (0);
}
