#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is leaf
 * @node: node to check/test
 *
 * Return: 1 if node is a leaf, 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
