#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a right-side child node
 * @parent: pointer to parent node
 * @value: value of the new node
 *
 * Description - If parent has a right-side child
 *			new node will become the new  right child of parent and
 *			old child will be set as right-child of new node
 * Return: NULL if parent NULL, OR a pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!(parent || newNode))
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->parent = parent;
	newNode->right = parent->right;
	parent->right = newNode;

	if (newNode->right != NULL)
		newNode->right->parent = newNode;

	return (newNode);
}
