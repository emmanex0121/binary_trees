#include "binary_trees.h"

/**
 * find_height - finds the height of the tree
 * @tree: the tree to find the height of
 *
 * Return: the height of the tree which will be
 *		one greater than the actual height
 */

size_t find_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	height_left = 1 + find_height(tree->left);
	height_right = 1 + find_height(tree->right);

	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}

/**
 * binary_tree_height - height of the tree given
 * @tree: tree given to find height of
 *
 * Return: height of tree or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	height = find_height(tree);

	if (height == 0)
		return (0);
	return (height - 1);
}
