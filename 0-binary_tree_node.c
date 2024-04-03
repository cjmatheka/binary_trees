#include "binary_trees.h"

/**
 * binary_tree_node - function for creating a binary tree
 * @parent: pointer to the parent  node
 * @value: value for the parent node
 * Return: Binary tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
