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
	else if ((tree->left == NULL) && (tree->right == NULL))
        return (1);
	calcl = binary_tree_leaves(tree->left);
	calcr = binary_tree_leaves(tree->right);
	return (calcl + calcr);
}
