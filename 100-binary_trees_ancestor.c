#include "binary_trees.h"

/**
 * binary_trees_ancestor - Func that finds the lowest common
 * ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: returns a pointer to the lowest common
 * ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *first_copy = (binary_tree_t *)first;
	binary_tree_t *second_copy = (binary_tree_t *)second;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	while (first_copy != NULL)
	{
		while (second_copy != NULL)
		{
			if (first_copy == second_copy)
				return (first_copy);
			second_copy = second_copy->parent;
		}
		second_copy = (binary_tree_t *)second;
		first_copy = first_copy->parent;
	}
	return (NULL);
}
