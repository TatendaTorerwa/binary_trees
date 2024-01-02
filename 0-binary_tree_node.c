#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 *
 * @parent: Pointer to the root node.
 *
 * @value: Value to put in the newnode.
 *
 * Return: The newnode.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
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

	return (newnode);
}
