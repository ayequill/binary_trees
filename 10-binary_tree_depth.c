#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the longest path
 * @tree: The tree node
 *
 * Return: Return depth of tree or 0 if NULL
 *
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree)
	{
		while (tree->parent)
		{
			depth += 1;
			tree = tree->parent;
		}
	return (depth);
	}
	else
		return (0);
}

