#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts leaves of a tree
 * @tree: root tree to be counted
 *
 * Return: Number of leaves on success OR 0 on failure
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t leaf = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaf = leaf + binary_tree_leaves(tree->left);
	leaf = leaf +  binary_tree_leaves(tree->right);

	return (leaf);
}
