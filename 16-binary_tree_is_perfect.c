#include "binary_trees.h"

/**
 * btree_is_full - checks if a tree is full.
 *
 * @tree: root node.
 * Return: 1 if full or 0 if not
 */
int btree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (!btree_is_full(tree->left))
		return (0);
	if (!btree_is_full(tree->right))
		return (0);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	return (1);
}

/**
 * height_recursion -function that calculates the height
 *
 * @tree: node to find recursion
 * Return: the number of height nodes
 */

size_t height_recursion(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree->left)
		left_count = height_recursion(tree->left);
	if (tree->right)
		right_count = height_recursion(tree->right);
	return ((left_count > right_count) ? left_count + 1 : right_count + 1);
}

/**
 * btree_balance - returns the balance of a tree
 * @tree: is the node from which to get the node
 * Return: an integer with the height or 0 if node is null
 */
int btree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
			left = height_recursion(tree->left);
		if (tree->right)
			right = height_recursion(tree->right);
		return (left - right);
	}
	else
		return (0);
}



/**
 * binary_tree_is_perfect - Returns if the tree is perfect
 * @tree: is the node from which to get the node
 *
 * Return: 1 if is perfect, 0 if doesn't
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfect_left = 1, perfect_right = 1;

	if (tree == NULL)
		return (0);
	if (tree->left)
		perfect_left = binary_tree_is_perfect(tree->left);
	if (tree->right)
		perfect_right = binary_tree_is_perfect(tree->right);
	if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
		return (perfect_left * perfect_right);
	return (0);
}
