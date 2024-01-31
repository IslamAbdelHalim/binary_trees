#include "binary_trees.h"

/**
 * binary_tree_nodes - function that the node with at least one child
 *
 * @tree: pointer the root of tree
 *
 * Return: The count
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->right || tree->left)
			count++;
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);

		return (count);
	}
}
