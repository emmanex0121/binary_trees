#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count all nodes with at least 1 child
 * @tree: pointer to root node of tree
 *
 * Return: number of nodes with child, OR 0 on failure
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count = count + binary_tree_nodes(tree->left);
	count = count + binary_tree_nodes(tree->right);
	return (count + 1);
}
