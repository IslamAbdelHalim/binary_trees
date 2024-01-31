#include "binary_trees.h"
/**
 * binary_tree_depth - fun to get the depth of a tree
 * @tree: the tree to get it's depth
 * Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
