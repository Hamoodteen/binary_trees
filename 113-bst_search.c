#include "binary_trees.h"

/**
 * bst_search - f
 * @tree: tree
 * @value: int
 * Return: bt
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
