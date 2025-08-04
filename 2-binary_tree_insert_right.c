#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node
 * as a right-child of a parent
 * @parent: adress of the parent node
 * @value: value of the node
 *
 * Return: adresse of the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *next_right;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->right = NULL;
	}
	else
	{
		next_right = parent->right;
		new_node->right = next_right;
		next_right->parent = new_node;
		parent->right = new_node;
	}
	return (new_node);
}
