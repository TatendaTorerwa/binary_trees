#include "binary_trees.h"

/**
 *binary_tree_insert_right -  Inserts a node as the right-child.
 *
 * @parent: Pointer to the node to insert the right-child in.
 *
 * @value:  Value to store in the new node.
 *
 * Return: Pointer to the created node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}


	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}
	parent->right = newnode;

	return (newnode);
}

