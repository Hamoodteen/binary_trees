#include "binary_trees.h"

/**
 * binary_tree_size - f
 * @tree: bt
 * Return: void
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizep = 0, sizel = 0, sizer = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		sizel = 1 + binary_tree_size(tree->left);
	if (tree->right != NULL)
		sizer = 1 + binary_tree_size(tree->right);
	if (tree->parent != NULL)
		sizep = 1 + binary_tree_size(tree->parent);
	return (sizep + sizel + sizer);
}
