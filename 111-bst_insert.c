#include "binary_trees.h"
/**
 *
*/
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *newnode, *current;

	if (!tree)
		return (NULL);

	current = *tree;

	if (!*tree)
	{
		newnode = binary_tree_node((binary_tree_t *)(*tree), value);
		*tree = newnode;
		return (newnode);
	}
	else if (value < current->n)
	{
		if (current->left)
		{
			newnode = bst_insert(&current->left, value);	
		}
		else
		{
			newnode = binary_tree_node(current, value);
			current->left = newnode;
			return (newnode);
		}
	}
	else if (value > current->n)
	{
		if (current->right)
		{
			newnode = bst_insert(&current->right, value);
		}
		else
		{
			newnode = binary_tree_node(current, value);
			current->right = newnode;
			return (newnode);
		}
	}
	else
	{
		return (NULL);
	}
	return (newnode);
}
