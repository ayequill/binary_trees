#include "binary_trees.h"

/**
* binary_tree_preorder - Applies a function on all nodes
* @tree: the tree to traverse
* @func: A pointer to a function to apply to each node
*
* Return: Nothing
*
*/


void binary_tree_preorder(const binary_tree_t
		*tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
