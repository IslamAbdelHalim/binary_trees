#include "binary_trees.h"

/**
 * binary_tree_node - function that create a node
 *
 * @parent: The root of tree
 *
 * @value: The value of node
 *
 * Return: a pointer to a new node or Null if fail
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	return (newNode);
}
