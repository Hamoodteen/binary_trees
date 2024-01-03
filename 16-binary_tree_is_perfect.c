#include "binary_trees.h"

/**
 * another_binary_tree_is_leaf - f
 * @node: node
 * Return: int
*/
int another_binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->left == NULL) && (node->right == NULL))
		return (1);
	else
		return (0);
}

/**
 * another_binary_tree_height - f
 * @tree: bt
 * Return: void
*/
size_t another_binary_tree_height(const binary_tree_t *tree)
{
	size_t L_height = 0, R_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		L_height = 1 + another_binary_tree_height(tree->left);
	if (tree->right != NULL)
		R_height = 1 + another_binary_tree_height(tree->right);
	if (L_height > R_height)
		return (L_height);
	else
		return (R_height);
}

/**
 * binary_tree_is_perfect- f
 * @tree: bt
 * Return: void
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (another_binary_tree_is_leaf(tree))
		return (1);
	if (another_binary_tree_height(tree->left) ==
	another_binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
