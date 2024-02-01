#include "binary_trees.h"
#include <limits.h>
/**
 * helper_bst - fun to check binary scearch tree or not
 * @tree: the tree to check
 * @min: min value of current sub-tree
 * @max: max value of current sub-tree
 * Return: 1 if bst, 0 otherwise
*/
int helper_bst(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (helper_bst(tree->left, min, tree->n) &&
		helper_bst(tree->right, tree->n, max));

}

/**
 * binary_tree_is_bst - fun to check bst or not
 * @tree: tree to check it
 * Return: as need
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (helper_bst(tree, INT_MIN, INT_MAX));
}
