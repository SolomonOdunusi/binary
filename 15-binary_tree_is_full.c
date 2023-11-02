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

/**
 * binary_tree_height - Func that measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: returns the height of the tree or 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree)
	{
		left_height = 0, right_height = 0;
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_height > right_height) ? left_height : right_height);
	}
	return (0);
}
