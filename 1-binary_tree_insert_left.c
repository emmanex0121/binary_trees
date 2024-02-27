#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a left side child node
 * @parent: pointer to parent node
 * @value: value of the new node
 *
 * Description - If parent has a left-side child
 *			new node will become the new child of parent and
 *			old child will be set as left-child of new node
 * Return: NULL if parent NULL, OR a pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!parent || !newNode)
		return (NULL);

	newNode->right = NULL;
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = parent->left;
	parent->left = newNode;

	if (newNode->left != NULL)
		newNode->left->parent = newNode;

	return (newNode);
}
