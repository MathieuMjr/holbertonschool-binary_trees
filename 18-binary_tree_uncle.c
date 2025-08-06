#include "binary_trees.h"

/**
 * binary_tree_uncle - tells if a node
 * have an uncle
 * @node: adress of the node to check
 *
 * Return: pointer to the uncle or null else
 * (no sibling... no node)
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent_node;
	binary_tree_t *ancestor;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent_node = node->parent;
	ancestor = parent_node->parent;

	if (ancestor->right == parent_node)
		return (ancestor->left);
	else
		return (ancestor->right);
}
