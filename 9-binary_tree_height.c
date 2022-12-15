#include "binary_trees.h"

/**
 * binary_tree_height - computes the height of a binary tree.
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL, height of binary tree otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t len = 0, row = 0;

		len = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		row = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((len > row) ? len : row);
	}
	return (0);
}
