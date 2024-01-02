#include "binary_trees.h"

/**
 * binary_tree_insert_left - f
 * @parent: bt
 * @value: int
 * Return: bt
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		parent->left->parent = node->parent;
		parent->left->n = node->n;
	}
	parent->left = node;
	return (node);
}
