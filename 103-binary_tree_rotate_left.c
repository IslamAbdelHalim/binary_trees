#include "binary_trees.h"

/**
 * binary_tree_rotate_left - function that performs a left rotation
 *
 * @tree: pointer to node
 *
 * Return: a pointer to the new root node of the tree once rotated
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);
	tree->parent = tree->right;

	if (tree->right)
	{
		tree->right = tree->right->left;
		tree->parent->left = tree;
		tree->parent->parent = NULL;
		if (tree->right)
			tree->right->parent = tree;
		return (tree->parent);
	}
	return (tree);
}
