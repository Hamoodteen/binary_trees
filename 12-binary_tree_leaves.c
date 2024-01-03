#include "binary_trees.h"

/**
 * binary_tree_leaves - f
 * @tree: bt
 * Return: void
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t calcl = 0, calcr = 0;

	if (tree == NULL)
		return (0);
	calcl = 1 + binary_tree_leaves(tree->left);
	calcr = 1 + binary_tree_leaves(tree->right);
	return (calcl + calcr);
}
