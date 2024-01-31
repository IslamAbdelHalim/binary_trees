#include "binary_trees.h"

/**
 * binary_tree_is_full - function that check if the tree is full or not
 *
 * @tree:pointer to the tree
 *
 * Return: 1 if the tree is full and 0 if not
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->right && !tree->left) ||
			(tree->left && !tree->right))
	{
		return (0);
	}

	binary_tree_is_full(tree->right);
	binary_tree_is_full(tree->left);

	return (1);
}
