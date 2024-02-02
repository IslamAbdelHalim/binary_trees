#include "binary_trees.h"

/**
 * bst_search - function that search for the node in tree
 *
 * @tree: pointer to the tree
 *
 * @value: the value of node
 *
 * Return: the node if found or null if not
*/

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node;

	if (tree == NULL)
		return (NULL);
	if (value < tree->n)
	{
		node = bst_search(tree->left, value);
	}
	else if (value >= tree->n)
	{
		node = bst_search(tree->right, value)
	}
	else if (value == tree->n)
	{
		return ((bst_t *)tree);
	}
	else
	{
		return (NULL);
	}

	return (node);
}
