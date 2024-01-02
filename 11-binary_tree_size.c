#include "binary_trees.h"

/**
 * binary_tree_size - f
 * @tree: bt
 * Return: void
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t L_height = 0, R_height = 0;

	if (tree == NULL)
		return (0);
	L_height = binary_tree_size(tree->left);
	R_height = binary_tree_size(tree->right);
	return (L_height + R_height + 1);
}
