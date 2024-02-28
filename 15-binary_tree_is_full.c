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
	int left_branch = 0;
	int right_branch = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_branch = binary_tree_is_full(tree->left);
	right_branch = binary_tree_is_full(tree->right);
	if (left_branch == right_branch)
		return (left_branch);
	return (0);
}
