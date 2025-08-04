#include "binary_trees.h"

/**
 * binary_tree_preorder - goes in the tree
 * using pre-order traversal (operate
 * a function on the node)
 * @tree: adress of the root of a binary
 * tree
 * @func: pointer to a function returning
 * an int
 *
 * Return:
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
