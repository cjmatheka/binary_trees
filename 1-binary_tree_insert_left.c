#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a left node
 * @parent: pointer to parent node
 * @value: value of the new node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newleftNode;

	if (parent == NULL)
		return (NULL);

	newleftNode = malloc(sizeof(binary_tree_t));

	if (newleftNode == NULL)
		return (NULL);

	newleftNode->n = value;
	newleftNode->parent = parent;
	newleftNode->left = parent->left;
	newleftNode->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = newleftNode;

	parent->left = newleftNode;

	return (newleftNode);
}
