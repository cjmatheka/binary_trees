#include "binary_trees.h"

/**
 * binary_tree_balance - returns the balance factor
 * @tree: pointer to binary tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (tree == NULL)
		return (-1);

	balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	return (balance);
}