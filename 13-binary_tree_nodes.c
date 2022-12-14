#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count_nodes = 0;

	if (tree)
	{
		count_nodes += (tree->left || tree->right) ? 1 : 0;
		count_nodes += binary_tree_nodes(tree->left);
		count_nodes += binary_tree_nodes(tree->right);
	}
	return (count_nodes);
}
