#include "binary_trees.h"

/**
 * binary_tree_height - f
 * @tree: bt
 * Return: void
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t L_height = 0, R_height = 0;

	if (tree == NULL)
		return (0);
	else
	{
		if (tree->left != NULL)
		{
			L_height = binary_tree_height(tree->left);
		}
		if (tree->right != NULL)
		{
			R_height = binary_tree_height(tree->right);
		}
	}
	return (L_height > R_height) ? (L_height + 1) : (R_height + 1);
}
