#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree in entirety
 * @tree: pointer to the binary tree to be deleted
 * Return: Nothing is tree is Null.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
