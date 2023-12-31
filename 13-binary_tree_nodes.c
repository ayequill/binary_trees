#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at
 * least 1 child in a binary tree.
 * @tree: The tree node
 *
 * Return: Return amount of nodes or 0 if NULL
 *
 */


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_subtree, right_subtree;
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		nodes++;

	left_subtree = binary_tree_nodes(tree->left);
	right_subtree = binary_tree_nodes(tree->right);

	return (nodes + left_subtree + right_subtree);
}

