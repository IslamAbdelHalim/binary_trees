#include "binary_trees.h"
/**
 * array_to_bst - fun to insert an array in bst
 * @array: the arrey to insert
 * @size: the size of the array
 * Return: as need
*/
bst_t *array_to_bst(int *array, size_t size)
{
size_t i;
bst_t *rroot = NULL;

	if (!array || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		bst_insert(&rroot, array[i]);
	}
	return (rroot);
}
