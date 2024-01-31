#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node: the node which find his sibling
 *
 * Return: The node if found or NULL if not
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || !node->parent)
		return (NULL);

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	else
	{
		return (NULL);
	}
}
