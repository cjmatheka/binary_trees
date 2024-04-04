#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: pointer to binary tree
 * Return: number of nodes with atleast 1 child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	num = binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);

	return (num);
}
