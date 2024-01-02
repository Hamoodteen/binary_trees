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

	node = malloc(sizeof(binary_tree_t));
	if ((node == NULL) || (parent == NULL))
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent->left;
	parent->left = node;
	return (node);
}
