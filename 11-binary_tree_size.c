#include "binary_trees.h"

/**
 * binary_tree_size - counts all the nodes in a tree
 * @tree: Tree to be counted
 *
 * Return: size of tree on success, OR 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/*size_t tree_size_right = 0;*/
	/*size_t tree_size_left = 0;*/
	size_t size = 0;

	if (!tree)
		return (0);

	size = size + binary_tree_size(tree->left);
	size = size + binary_tree_size(tree->right);
	return (size + 1);
}
