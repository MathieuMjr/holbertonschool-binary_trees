#include "binary_trees.h"

/**
 * binary_tree_leaves - gives the
 * number of leaves
 * @tree: adress of the root
 *
 * Return: number of leaves or 0 if it's
 * NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nbleaf;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
		nbleaf = 0;

	nbleaf = nbleaf + binary_tree_leaves(tree->left);
	nbleaf = nbleaf + binary_tree_leaves(tree->right);

	return (nbleaf);
}
