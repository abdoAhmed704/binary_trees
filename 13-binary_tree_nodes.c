#include "binary_trees.h"
/**
* binary_tree_nodes - counting the nodes.
* @tree: ptr to root node.
* Return: number of nodes.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		size_t le = binary_tree_nodes(tree->left);
		size_t lo = 1 + binary_tree_nodes(tree->right);

		return (le + lo);
	}
	else
	{
		return (0);
	}
}
