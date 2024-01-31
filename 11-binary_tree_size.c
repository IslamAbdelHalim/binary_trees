#include "binary_trees.h"

/**
 * binary_tree_size - function that measure the size of tree
 *
 * @tree: The pointer of tree
 *
 * Return: The size of tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size++;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);

		return (size);
	}
}
