#include "binary_trees.h"

/**
 * binary_tree_sibling - Func that finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 * Return: returns a pointer to the sibling node or NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
