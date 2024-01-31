#include "binary_trees.h"
/**
 * sibling - function that finds the sibling of a node
 * @node: the node which find his sibling
 * Return: The node if found or NULL if not
*/
binary_tree_t *sibling(binary_tree_t *node)
{
	if (node == NULL || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}

/**
 * binary_tree_uncle - fun to find uncle of a node
 * @node: the node to find it's uncle
 * Return: uncle if found null if not
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	return (sibling(node->parent));
}
