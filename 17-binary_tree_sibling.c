#include "binary_trees.h"

/**
 * binary_tree_sibling - returns a pinter to the sibling of a node.
 *
 * @node: node.
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling_r, *sibling_l;

	if (!node || !node->parent)
		return (NULL);

	sibling_r = node->parent->right;
	sibling_l = node->parent->left;
	return (sibling_r == node ? sibling_l : sibling_r);
}
