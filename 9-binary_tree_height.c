#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of binary tree
 * @tree: pointer to the binary tree
 * Return: size of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, tree_height;

	if (tree == NULL)
		return (0);

	left_height = 0, right_height = 0;

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	tree_height = ((left_height > right_height) ? left_height : right_height);

	return (tree_height);
}
