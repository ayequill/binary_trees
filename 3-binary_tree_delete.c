#include "binary_trees.h"

/**
* binary_tree_delete - delete a binary tree
* @tree: the binary tree
*
* Return: Nothing
*
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	if (tree->parent)
		tree->parent = NULL;

	if (tree->left)
		binary_tree_delete(tree->left);

	if (tree->right)
		binary_tree_delete(tree->right);

	free(tree);
}
