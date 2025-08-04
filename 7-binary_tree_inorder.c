#include "binary_trees.h"

/**
 * binary_tree_inorder - goes in the tree
 * using in-order traversal (operate
 * a function on the node)
 * @tree: adress of the root of a binary
 * tree
 * @func: pointer to a function returning
 * an int
 *
 * Return:
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
