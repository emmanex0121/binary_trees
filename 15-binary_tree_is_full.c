#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: pointer to tree to be checked
 *
 * Return: 0 if tree NULL and if tree is not full, OR 1 if tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_branch = 0;
	size_t right_branch = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		left_branch = binary_tree_size(tree->left);
		right_branch = binary_tree_size(tree->right);
	}

	if (left_branch == right_branch)
		return (1);
	return (0);
}
