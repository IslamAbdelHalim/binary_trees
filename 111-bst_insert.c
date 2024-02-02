#include "binary_trees.h"
/**
 *
*/
bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *newnode, *current;

	if (!tree)
		return (NULL);
	newnode = binary_tree_node(NULL, value);
	if (!newnode)
		return (NULL);
	if (!*tree)
	{
		*tree = newnode;
		return (newnode);
	}
	current = *tree;
	while (current)
	{
		if (value == current->n)
		{
			free(newnode);
			return (NULL); /*the node already exist*/
		}
		if (value > current->n)
		{
			if (!current->right)
			{
				current->right = newnode;
				newnode->parent = current;
				return (newnode);
			}
			else
		}
		if (value < current->n)
		{
			if (!current->left)
			{
				current->left = newnode;
				newnode->parent = current;
				return (newnode);
			}

		}
	}
	return (NULL);
}
