#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a tree using post-order traversal
 * @tree: tree to be traversed
 * @func: pointer to fuction to call for each node
 *
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
