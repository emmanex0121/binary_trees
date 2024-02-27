#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a nodein a tree
 * @tree: pointer to node to measure its depth
 *
 * Return: 0 if tree is NULL, OR depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree || tree->parent == NULL)
		return (0);
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
