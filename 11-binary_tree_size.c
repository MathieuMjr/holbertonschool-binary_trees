#include "binary_trees.h"

/**
 * binary_tree_size - gives the number
 * of nodes in the tree
 * @tree: adress of the root
 *
 * Return: size of the tree or 0 if it's
 * NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = 1;

	
	size = size + binary_tree_size(tree->left);
	size = size + binary_tree_size(tree->right);

	return (size);
}
