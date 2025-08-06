#include "binary_trees.h"

/**
 * binary_tree_sibling - tells if a node
 * have a sibling
 * @node: adress of the node to check
 *
 * Return: pointer to the sibling or null else
 * (no parent, no sibling... no node)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent_node;
	binary_tree_t *check_ptr;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent_node = node->parent;

	if (parent_node->left == node)
		check_ptr = parent_node->right;
	else
		check_ptr = parent_node->left;

	return (check_ptr);
}
