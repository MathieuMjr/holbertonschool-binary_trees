#include "binary_trees.h"

/**
 * binary_tree_nodes - gives the number
 * of nodes having at least 1 child
 * @tree: adress of the root
 *
 * Return: number of nodes with at least
 * 1 child, or 0 if tree's NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t with_child = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		with_child += 1;

	with_child = with_child + binary_tree_nodes(tree->right);
	with_child = with_child + binary_tree_nodes(tree->left);

	return (with_child);

}
