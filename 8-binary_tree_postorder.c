#include "binary_trees.h"
/**
* binary_tree_postorder - travle using post-order traversal
* @tree: pointer to the root node
* @func: pointer to print function
* Return:  measure the depth
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL  && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
