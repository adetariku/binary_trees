#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: pointer to the root node .
 *
 * Return: 0 if tree is NULL, balance factor otherwise.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - computes the height of a binary tree.
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL, height of node otherwise.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t len = 0, row = 0;

		len = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		row = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((len > row) ? len : row);
	}
	return (0);
}
