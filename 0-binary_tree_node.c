#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree
 * @parent: parent binary trees
 * @value:  new node
 * Return: new _node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_new;

	if (value == '\0')
		return (NULL);

	node_new = malloc(sizeof(binary_tree_t));
	if (node_new == NULL)
		return (NULL);

	node_new->parent = parent;
	node_new->n = value;
	node_new->right = NULL;
	node_new->left = NULL;

	return (node_new);
}
