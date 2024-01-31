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
