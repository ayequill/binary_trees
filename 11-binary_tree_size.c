#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a tree
 * @tree: The tree node
 *
 * Return: Return size of tree or 0 if NULL
 *
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
