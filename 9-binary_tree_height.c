#include "binary_trees.h"
/**
 * binary_tree_height -  measures the height of a binary tree.
 *
 * @tree: pointer in the parent node.
 *
 * Return: pointer in the new node.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t H_right = 0, H_left = 0;

	if (!tree)
		return (0);
	if (tree->right)
		H_right = 1 + binary_tree_height(tree->right);
	if (tree->left)
		H_left = 1 + binary_tree_height(tree->left);
	if (H_right > H_left)
		return (H_right);
	else
		return (H_left);
}
