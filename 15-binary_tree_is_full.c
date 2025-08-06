#include "binary_trees.h"

/**
 * binary_tree_is_full - tells if the tree
 * is full or not (all nodes have right
 * and left != null or both null)
 * @tree: adress of the root of a binary
 * tree
 *
 * Return: 1 if full, return 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int fullness = 1;
	int fullness_right = 1;
	int fullness_left = 1;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right != NULL) ||
		(tree->left != NULL && tree->right == NULL))
		fullness = 0;

	fullness_left = fullness * binary_tree_is_full(tree->left);
	fullness_right = fullness * binary_tree_is_full(tree->right);

	if (fullness_left != fullness_right)
		fullness = 0;
	return (fullness);
}
