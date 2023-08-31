#include "binary_trees.h"

/**
 * binary_tree_delete - deletes
 * @tree: pointer in The Noeud
 *
 * Return: delete the node in she not return anything
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
