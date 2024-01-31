#include "binary_trees.h"

/**
 * binary_tree_delete - function that print all tree
 *
 * @tree: pointer the root of tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree->left != NULL)
		{
			binary_tree_delete(tree->left);
		}
		else if (tree->right != NULL)
		{
			binary_tree_delete(tree->right);
		}

		free(tree);
	}
}