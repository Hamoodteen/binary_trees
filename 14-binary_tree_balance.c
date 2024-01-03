#include "binary_trees.h"

/**
 * binary_tree_balance - f
 * @tree: bt
 * Return: void
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t L_height = 0, R_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		L_height = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		R_height = 1 + binary_tree_height(tree->right);
	return (L_height - R_height);
}
