#include "binary_trees.h"

/**
 * binary_tree_levelorder - Func that goes through a binary tree using
 * level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node.
 * Level-order traversal: left, right, root
 * Return: returns nothing
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = 0, i;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (i = 1; i <= height + 1; i++)
	{
		print_level(tree, i, func);
	}
}
