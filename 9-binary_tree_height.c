#include "binary_trees.h"
/**
 * the_max_depth - measures the height of a binary tree
 * @the_node: pointer to node
 * Return: height.
 */
int the_max_depth(const binary_tree_t *the_node)
{
	if (the_node == NULL)
	{
		return (0);
	}
	else
	{
		int left_depth = the_max_depth(the_node->left);
		int right_depth = the_max_depth(the_node->right);

		if (left_depth > right_depth)
		{
			return (left_depth + 1);
		}
		else
		{
			return (right_depth + 1);
		}
	}
}

/**
 * binary_tree_height - height of a binary tree
 * @tree: pointer to root
 * Return:  measure the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (the_max_depth(tree) - 1);
}

