#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that return the common ancestor
 *
 * @first: the first node
 *
 * @second: the second node
 *
 * Return: The ancestor node
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *pFirst, *pSecond;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	pFirst = first->parent;
	pSecond = second->parent;

	if (pSecond == NULL || pFirst == second || (!pSecond->parent && pFirst))
		return (binary_trees_ancestor(pFirst, second));
	else if (pFirst == NULL || pSecond == first || (!pFirst->parent && pSecond))
		return (binary_trees_ancestor(first, pSecond));

	return (binary_trees_ancestor(pFirst, pSecond));
}
