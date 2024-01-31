#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: The pointer of the root or tree
 *
 * Return: The depth of height of tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left)
			height_left += binary_tree_height(tree->left) + 1;
		else if (tree->right)
			height_right += binary_tree_height(tree->right) + 1;

		return ((height_left > height_right) ? height_left : height_right);
	}
}
