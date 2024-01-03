#include "binary_trees.h"

/**
 * binary_tree_uncle - f
 * @node: node
 * Return: bt
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if ((node == NULL) || (node->parent == NULL))
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	else
		return (NULL);
}
