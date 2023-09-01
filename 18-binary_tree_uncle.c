#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node
 *
 * Return: Pointer to the uncle node, or NULL if conditions are met
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	binary_tree_t *grand_parent = node->parent->parent;

	if (grand_parent->left == node->parent)
		return (grand_parent->right);

	return (grand_parent->left);
}
