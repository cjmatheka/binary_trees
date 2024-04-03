#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a right node
 * @parent: pointer to the parent node
 * @value: value for new node
 * Return: pointer to new node
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = parent->right;

	if (parent->left != NULL)
		parent->right->parent = newNode;

	parent->right = newNode;

	return (newNode);
}
