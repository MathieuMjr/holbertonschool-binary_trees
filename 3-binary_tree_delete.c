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
	binary_tree_t *reading_head;
	binary_tree_t *temp;

	if (tree == NULL)
		return;
	
	reading_head = tree;

	while((reading_head->left != NULL || reading_head->right != NULL))
	{
		while(reading_head->left != NULL || reading_head->right != NULL)
		{
			if(reading_head->left != NULL)
				reading_head = reading_head->left;
			else
				reading_head = reading_head->right;
		}
		if (reading_head->parent == NULL)
			break;
		temp = reading_head;
		reading_head = reading_head->parent;
		if (reading_head->left == temp)
			reading_head->left = NULL;
		if (reading_head->right == temp)
			reading_head->right = NULL;
		free(temp);
	}
	free(tree);
}
