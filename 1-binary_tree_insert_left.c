#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child.
 * @parent: A ptr to the node to insert.
 * @value: value.
 * Return: A created node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_new = NULL;

	if (value == '\0' || parent == NULL)
		return (NULL);

	node_new = malloc(sizeof(binary_tree_t));
	if (node_new == NULL)
		return (NULL);

	node_new->n = value;
	node_new->parent = parent;
	node_new->left = NULL;
	node_new->right = NULL;

	if (parent->left != NULL)
	{
		node_new->left->parent = node_new;
		node_new->left = parent->left;
	}
	parent->left = node_new;
	return (node_new);
}
