#include "binary_trees.h"

/**
 * binary_tree_inorder - transverses binary tree in order
 * @tree: pointer to the binary tree
 * @func: function to apply for every node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	printf("%d\n", tree->n);

	binary_tree_inorder(tree->right, func);
}