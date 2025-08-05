#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node
 * as a right-child of a parent
 * @parent: adress of the parent node
 * @value: value of the node
 *
 * Return: adresse of the new node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
