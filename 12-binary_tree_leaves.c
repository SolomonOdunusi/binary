#include "binary_trees.h"

/**
 * binary_tree_leaves - Func that counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: returns the number of leaves or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		leaves++;
	return (leaves);
}
