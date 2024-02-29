#include "binary_trees.h"
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
