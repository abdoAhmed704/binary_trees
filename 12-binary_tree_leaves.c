#include "binary_trees.h"
/**
* binary_tree_leaves - counts the leaves
* @tree: pointer to nood root
* Return: leaves of tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	else
	{
		size_t le = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

		return (le);
	}
}
