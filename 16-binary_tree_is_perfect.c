#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a tree
 * @tree: The node
 *
 * Return: Height of node or 0 if node doesn't exist.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);


	return ((left_height > right_height) ?
		left_height + 1 :
		right_height + 1);
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if the tree is perfect, 0 otherwise or
 * if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (!tree->left && !tree->right)
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	return (0);
}
