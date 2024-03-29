#include "binary_trees.h"

/**
 * binary_tree_is_full - f
 * @tree: bt
 * Return: void
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	else if ((tree->left != NULL) && (tree->right != NULL))
		return ((binary_tree_is_full(tree->left)) &&
		(binary_tree_is_full(tree->right)));
	else
		return (0);
}
