#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves of a binary tree.
 * @tree: pointer to the root node of the tree
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t numOfleave = 0;

	if (tree)
	{
		numOfleave += (!tree->left && !tree->right) ? 1 : 0;
		numOfleave += binary_tree_leaves(tree->left);
		numOfleave += binary_tree_leaves(tree->right);
	}
	return (numOfleave);
}
