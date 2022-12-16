#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 * @first: pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: common ancestor if exist else NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mfirst, *msecond;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mfirst = first->parent, msecond = second->parent;
	if (first == msecond || !mfirst || (!mfirst->parent && msecond))
		return (binary_trees_ancestor(first, msecond));
	else if (mfirst == second || !msecond || (!msecond->parent && mfirst))
		return (binary_trees_ancestor(mfirst, second));
	return (binary_trees_ancestor(mfirst, msecond));
}
