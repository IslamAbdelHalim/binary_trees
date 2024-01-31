#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: The pointer of the root or tree
 * Return: The depth of height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height_left = 0;
size_t height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_left += binary_tree_height(tree->left);
	if (tree->right)
		height_right += binary_tree_height(tree->right);

	return (((height_left > height_right) ? height_left : height_right) + 1);
}


/**
 * binary_tree_is_full - function that check if the tree is full or not
 *
 * @tree:pointer to the tree
 *
 * Return: 1 if the tree is full and 0 if not
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			left = binary_tree_is_full(tree->left);
			right = binary_tree_is_full(tree->right);
			if (left == 0 || right == 0)
				return (0);

			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
 * binary_tree_is_perfect - fun to check if a tree perfect or not
 * @tree: tree to check
 * Return: 1 if perfect 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left, right;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left == right && binary_tree_is_full(tree))
		return (1);

	return (0);
}
