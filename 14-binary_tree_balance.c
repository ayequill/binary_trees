#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance
 * factor of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int left_height = (int)binary_tree_height(tree->left);
	int right_height = (int)binary_tree_height(tree->right);

	return (left_height - right_height);
}


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

	return (calculate_height(tree));
}