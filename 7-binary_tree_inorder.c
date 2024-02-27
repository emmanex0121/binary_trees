#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse the tree using in-order traversal
 * @tree: Tree to be traversed
 * @func: pointer to function to call for each node
 *
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
