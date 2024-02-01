#include "binary_trees.h"
#include <limits.h>
/**
 * 
*/
int helper_bst(const binary_tree_t *tree)
{
    if (!tree)
        return (1);

    if ((tree->left && tree->n > tree->left->n) || (tree->right && tree->n <= tree->right->n))
        return (1);
    else
        return (0);

    return (helper_bst(tree->left) &&
        helper_bst(tree->right));
}

/**
 * 
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    return (helper_bst(tree));
}
