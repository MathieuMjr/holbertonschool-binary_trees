#include "binary_trees.h"

/**
 * binary_tree_height - gives the height
 * of a binary tree
 * @tree: adress of the root of a binary
 * tree
 *
 * Return: height of the tree or 0 if null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}
