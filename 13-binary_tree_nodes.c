#include "binary_trees.h"

/**
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
