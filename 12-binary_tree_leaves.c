#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves of a tree
 * @tree: The tree node
 *
 * Return: Return amount of leaves or 0 if NULL
 *
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	size_t left_leaves = binary_tree_leaves(tree->left);
	size_t right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
