#include "binary_trees.h"
/**
 * binary_tree_insert_right - fun to insert new node to the left
 * @parent: the root of the tree
 * @value: value of the node
 * Return: newnode
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);

	if (!parent->right)
	{
		parent->right->parent = newnode;
		newnode->right = parent->right;
	}
	parent->right = newnode;

	return (newnode);
}
