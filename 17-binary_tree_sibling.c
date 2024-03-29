#include "binary_trees.h"

/**
 * binary_tree_sibling - f
 * @node: node
 * Return: bt
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if ((node == NULL) || (node->parent == NULL))
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else if (node == node->parent->right)
		return (node->parent->left);
	else
		return (NULL);
}
