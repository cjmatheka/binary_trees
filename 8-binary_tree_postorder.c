#include "binary_trees.h"

/**
 * binary_tree_postorder - transverses a binary tree in postorder
 * @tree: pointer to the binary tree
 * @func: pointer to function to apply for each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
