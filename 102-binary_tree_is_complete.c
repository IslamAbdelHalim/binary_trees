#include "binary_trees.h"

/**
 * binary_tree_is_complate - function that check if the tree is complage
 *
 * @tree: pointer to the tree
 *
 * Return: 1 if the tree is complate and 0 if not
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0,
	    c_left = 0, c_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		h_left = binary_tree_height(tree->left);
		h_right = binary_tree_height(tree->right);

		if (h_left == h_right)
		{
			c_left = binary_tree_is_complete(tree->left);
			c_right = binary_tree_is_complete(tree->right);

			return (c_left == c_right ? 1 : 0);
		}
		else
		{
			return (0);	
		}
	}
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: The pointer of the root or tree
 * Return: The depth of height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		h_left = binary_tree_height(tree->left);
	if (tree->right)
		h_right = binary_tree_height(tree->right);

	return ((h_left > h_right ? h_left : h_right) + 1);
}
