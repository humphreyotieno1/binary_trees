#include "binary_trees.h"

/**
 * binary_tree_node - create binary tree node
 * @parent: ptr to parent of node created
 * @value: value put in new node
 *
 * Return: NULL if error, otherwise ptr to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
