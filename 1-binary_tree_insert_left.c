#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node
 * as a left-child of a parent
 * @parent: adress of the parent node
 * @value: value of the node
 *
 * Return: adresse of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *next_left;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL || parent == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;

	if (parent->left != NULL)
	{
		next_left = parent->left;
		new_node->left = next_left;
		next_left->parent = new_node;
		parent->left = new_node;
	}
	else
		new_node->left = NULL;
	return (new_node);
}
