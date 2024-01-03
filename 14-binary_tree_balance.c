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
		L_height = 1 + binary_tree_balance(tree->left);
	if (tree->right != NULL)
		R_height = 1 + binary_tree_balance(tree->right);
	if (L_height > R_height)
		return (1);
	else if (L_height < R_height)
		return (-1);
	else
		return (0);
}
