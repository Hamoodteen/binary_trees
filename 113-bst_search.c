#include "binary_trees.h"

/**
 * bst_search - f
 * @tree: tree
 * @value: int
 * Return: bt
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *nd;

	nd = malloc(sizeof(bst_t));
	if (nd == NULL)
		return (NULL);
	nd->n = tree->n;
	nd->parent = tree->parent;
	nd->left = tree->left;
	nd->right = tree->right;
	if (tree == NULL)
		return (NULL);
	if (tree->n == value)
		return (nd);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
