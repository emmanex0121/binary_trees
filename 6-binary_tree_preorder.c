#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree using pre-order traversal
 * @tree: Tree to be traversed
 * @func: pointer to function to be called for each node
 *
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
