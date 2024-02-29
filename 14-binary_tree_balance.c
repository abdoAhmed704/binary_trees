#include "binary_trees.h"

/**
 * maxDepth - measures the height of a binary tree
 * @node: pointer to node
 * Return: measure the height.
 */
int maxDepth(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{
		/* compute the depth of each subtree */
		int left_depth = maxDepth(node->left);
		int right_depth = maxDepth(node->right);

		/* use the larger one */
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
 * @tree: pointer to node root
 * Return: measure the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (maxDepth(tree) - 1);
}

/**
* binary_tree_balance -  measure the balance of a tree
* @tree: root node of the tree to measure the balance
* Return: num of nodes with a child
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightL = 0;
	int heightR = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		heightL = binary_tree_height(tree->left) + 1;

	if (tree->right)
		heightR = binary_tree_height(tree->right) + 1;

	return (heightL - heightR);
}

