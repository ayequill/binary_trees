#include "binary_trees.h"

/**
* binary_tree_inorder - Applies a function on * all nodes
* @tree: the tree to traverse
* @func: A pointer to a function to apply to each node
*
* Description: Traverses the tree in order.
* We vist the left sub-tree, the root and the
* right sub-tree in that order.
*
* Return: Nothing
*
*/


void binary_tree_inorder(const binary_tree_t *tree,
		void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
