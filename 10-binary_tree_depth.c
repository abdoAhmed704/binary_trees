#include "binary_trees.h"
/**
* binary_tree_depth - measures the depth of a tree nodes
* @tree: pointer to node measures
* Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int dp;
	binary_tree_t *curr;

	if (tree == NULL)
		return (0);

	dp = 0;

	curr = tree->parent;
	while (curr)
	{
		dp++;
		curr = curr->parent;
	}
	return (dp);
}
