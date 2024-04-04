
#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a binary tree
 * @tree: pointer to the binary tree.
 * Return: depth of the binary tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth, right_depth, tree_depth;

	if (tree == NULL)
		return (0);

	left_depth = 0, right_depth = 0;

	left_depth = tree->left ? 1 + binary_tree_depth(tree->left) : 0;
	left_depth = tree->right ? 1 + binary_tree_depth(tree->right) : 0;
	tree_depth = ((left_depth > right_depth) ? left_depth : right_depth);

	return (tree_depth);
}
