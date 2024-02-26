#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node to create
 * @value: value for the new node
 *
 * Return: pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!newNode)
	{
		return (NULL);
	}

	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;

	return (newNode);
}
