#include "binary_trees.h"
/**
 * binary_tree_leaves - fun to get number of leaves in a tree
 * @tree: the tree to calculate it's leaves
 * Return: total number of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t left, right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
