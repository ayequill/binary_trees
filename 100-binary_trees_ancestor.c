#include "binary_trees.h"

/**
* binary_trees_ancestor - Finds the lowest common ancestor
* @first: Pointer to the first node.
* @second: Pointer to the second node.
*
* Return: If no common ancestor is found, return (NULL);
* else return the common ancestor.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	binary_tree_t *parent_1, *parent_2;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	parent_1 = first->parent;
	parent_2 = second->parent;

	if (first == parent_2 || !parent_1 || (!parent_1->parent && parent_2))
		return (binary_trees_ancestor(first, parent_2));
	else if (parent_1 == second || !parent_2 || (!parent_2->parent && parent_1))
		return (binary_trees_ancestor(parent_1, second));

	return (binary_trees_ancestor(parent_1, parent_2));
}
