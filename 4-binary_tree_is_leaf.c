#include "binary_trees.h"

/**
 * binary_tree_is_leaf - f
 * @node: node
 * Return: int
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if ((node->left == NULL) && (node->right == NULL) && (node->parent != NULL))
	{
		return (1);
	}
	return (0);
}
