#include "binary_trees.h"

/**
 * binary_tree_levelorder - f
 * @tree: tree
 * @func: func
 * Return: void
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
	{
	}
	else
		func(tree->n);
}
