#include "binary_trees.h"
/**
 * binary_tree_size -  measures the size of a binary tree.
 *
 * @tree: pointer in the parent node.
 *
 * Return: size of binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t H_right = 0, H_left = 0;

	if (!tree)
		return (0);
	if (tree->right)
		H_right = binary_tree_size(tree->right);
	if (tree->left)
		H_left = binary_tree_size(tree->left);
	return (H_left + H_right + 1);
}
