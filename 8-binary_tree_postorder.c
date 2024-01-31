#include "binary_trees.h"
/**
 * binary_tree_postorder - fun to display post-order tree
 * @tree: the tree to display
 * @func: fun to call each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);

}
