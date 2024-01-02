#include "binary_trees.h"

/**
 * binary_tree_delete - f
 * @tree: bt
 * Return: void
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
	}
	free(tree);
}
