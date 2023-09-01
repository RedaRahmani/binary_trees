#include "binary_trees.h"
/**
 * binary_tree_depth -  measures the depth of a node in a binary tree.
 *
 * @tree: pointer in the parent node.
 *
 * Return: size of the node in binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cpt = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		cpt = 1 + binary_tree_depth(tree->parent);

	return (cpt);
}
