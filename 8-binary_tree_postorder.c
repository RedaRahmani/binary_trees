#include "binary_trees.h"
/**
 * binary_tree_postorder -  goes through binary tree using post-order traversal
 *
 * @tree: pointer in the parent node.
 * @func: pointer in the function.
 *
 * Return: pointer new node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
