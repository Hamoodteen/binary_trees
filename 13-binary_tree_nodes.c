#include "binary_trees.h"

/**
 * binary_tree_nodes - f
 * @tree: bt
 * Return: void
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t calcl = 0, calcr = 0;

	if (tree == NULL)
		return (0);
	else if ((tree->left != NULL) && (tree->right != NULL))
	{
		calcl = binary_tree_nodes(tree->left);
		calcr = binary_tree_nodes(tree->right);
	}
	return (calcl + calcr + 1);
}
