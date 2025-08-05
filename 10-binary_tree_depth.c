#include "binary_trees.h"

/**
 * binary_tree_depth - gives the depth
 * of a node
 * @tree: adress of a node
 *
 * Return: depht of the node or 0 if it's
 * NULL or it's root
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
