#include "binary_trees.h"

/**
* binary_tree_postorder - Applies a function on all nodes
* @tree: the tree to traverse
* @func: A pointer to a function to apply to each node
*
* Description: Traverses the tree using post order.
* We vist the left sub-tree, the
* right sub-tree and the root in that order.
*
* Return: Nothing
*
*/


void binary_tree_postorder(const binary_tree_t *tree,
		void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
