#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is root
 * @node: node to check/test
 *
 * Return: 1 if node is a root, 0 if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0)
	else
		return (1);
}
