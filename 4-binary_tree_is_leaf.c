#include "binary_trees.h"
/**
 * binary_tree_is_leaf - fun to check if a node is leaf or not
 * @node: node to check
 * Return: 1 if a leaf 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);

	return (0);
}
