#include "binary_trees.h"

/**
 * binary_tree_delete - free a binary tree
 * @tree: adress of the root of a binary
 * tree
 *
 * Return:
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
