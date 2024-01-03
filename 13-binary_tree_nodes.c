#include "binary_trees.h"

/**
 * binary_tree_nodes - f
 * @tree: bt
 * Return: void
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t calc = 0;

	if (tree == NULL)
		return (0);
	if ((tree->left != NULL) || (tree->right != NULL))
	{
		calc = (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	}
	return (calc);
}
