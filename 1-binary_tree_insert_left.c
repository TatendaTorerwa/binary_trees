#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child.
 *
 * @parent: Pointer to the node to insert the left-child in.
 *
 * @value: Value to stor ein the new node.
 *
 * Return: new node
 *if parent == NULL return NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
	{
		return (NULL);
	}


	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	binary_tree_t *temp;

	temp = parent->left;
	if (temp != NULL)
	{
		newnode->left = temp;
		temp->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
