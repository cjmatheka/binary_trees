
#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a binary tree
 * @tree: pointer to the binary tree.
 * Return: depth of the binary tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth;

	if (tree == NULL)
		return (0);

	tree_depth = ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);

	return (tree_depth);
}
