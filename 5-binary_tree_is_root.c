#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if node is a root
 *
 * @node: pointer to a node
 *
 * Return: return 1 if node is root and 0 if not
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{
		if (node->parent == NULL)
			return (1);
		else
			return (0);
	}
}
