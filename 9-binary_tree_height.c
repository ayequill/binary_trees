#include "binary_trees.h"

/**
 * calculate_height - Calculates the longest path
 * @node: The tree node
 *
 * Return: Max
 *
 */

size_t calculate_height(const binary_tree_t *node)
{
	if (!node)
		return (0);
	size_t left_height = calculate_height(node->left);
	size_t right_height = calculate_height(node->right);

	return ((left_height > right_height) ?
		(left_height + 1) :
		(right_height + 1));
}
/**
 * binary_tree_height - Calculates the height of a tree
 *
 * @tree: The node
 *
 * Return: Height of node or NULL if node doesnt
 * exist.
 *
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (calculate_height(tree) - 1);
}
