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
	if (tree->left)
	{
	binary_tree_delete(tree->left);
	}
	if (tree->right)
	{
	binary_tree_delete(tree->right);
	}
	free(tree);
}
