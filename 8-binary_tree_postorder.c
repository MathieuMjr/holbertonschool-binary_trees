#include "binary_trees.h"

/**
 * binary_tree_postorder - goes in the tree
 * using post-order traversal (operate
 * a function on the node)
 * @tree: adress of the root of a binary
 * tree
 * @func: pointer to a function returning
 * an int
 *
 * Return:
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
