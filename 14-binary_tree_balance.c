#include "binary_trees.h"

/**
 * binary_tree_balance_bf - gives the height of
 * a tree
 * @tree: adress of the root of a binary
 * tree
 *
 * Return: height of the tree or -1 if
 * tree is NULL
 */
int binary_tree_height_bf(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height_bf(tree->left);
	right_height = binary_tree_height_bf(tree->right);
	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}

/**
 * binary_tree_balance - gives the balance
 * factor of a tree
 * @tree: adress of the root of a binary
 * tree
 *
 * Return: balance factor and 0 if
 * tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height_bf(tree->left);
	height_right = binary_tree_height_bf(tree->right);

	if (height_left != height_right)
		return ((int)height_left - (int)height_right);
	else
		return (0);
}
