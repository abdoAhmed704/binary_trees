#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-child.
* @parent : pointer to the parent node
* @value : the value
* Return: pointer to the new node, NULL on fail
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	parent->left = new_node;

	return (new_node);
}
