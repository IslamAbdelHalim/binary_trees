#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that insert a node in left
 *
 * @parent: The node the you add the new node inside id
 *
 * @value: The Value of new node
 *
 * Return: The new Node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	/*create the new node*/
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = newNode;
	}
	else
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
		parent->left = newNode;
	}

	return (newNode);
}
