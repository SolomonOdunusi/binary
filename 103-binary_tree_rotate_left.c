#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Func that performs a left-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 * Return: returns a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL)
		return (NULL);
	if (tree->right == NULL)
		return (tree);
	temp = tree->right;
	tree->right = temp->left;
	if (temp->left != NULL)
		temp->left->parent = tree;
	temp->left = tree;
	temp->parent = tree->parent;
	tree->parent = temp;
	return (temp);
}
