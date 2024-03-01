#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a
 * @node:  pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - get the uncle of a node
 * @node: pointer
 *
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
