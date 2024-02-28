#include "binary_trees.h"

/**
 * binary_tree_size - counts all the nodes in a tree
 * @tree: Tree to be counted
 *
 * Return: size of tree on success, OR 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size = size + binary_tree_size(tree->left);
	size = size + binary_tree_size(tree->right);
	return (size + 1);
}

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

	left_branch = binary_tree_size(tree->left);
	right_branch = binary_tree_size(tree->right);

	if (left_branch == right_branch)
		return (1);
	else
		return (0);
}
