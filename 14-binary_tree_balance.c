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
			height_left += binary_tree_height(tree->left);
		if (tree->right)
			height_right += binary_tree_height(tree->right);

		return (((height_left > height_right) ? height_left : height_right) + 1);
	}
}

#include "binary_trees.h"
/**
 * binary_tree_balance - fun to calculate the balance factor of a tree
 * @tree: the tree to get it's balance factor
 * Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left, right;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
