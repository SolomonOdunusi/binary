#include "binary_trees.h"

/**
 * binary_tree_nodes - Func that counts the nodes with at least 1 child
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: returns the number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		nodes++;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
