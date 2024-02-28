#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect
 *         0 if the tree is not perfect
 *         0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	size_t left_tree = 0;
	size_t right_tree = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_tree = binary_tree_size(tree->left);
	right_tree = binary_tree_size(tree->right);

	if (left_tree == right_tree)
		return (1);
	return (0);
}
