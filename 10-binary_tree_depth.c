#include "binary_trees.h"

/**
 * binary_tree_depth - computes the depth of a node in a binary tree.
 * @tree: A pointer to the node
 *
 * Return: 0 if tree is NULL, the depth of the node otherwise.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
