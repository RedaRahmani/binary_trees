#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to be stored in the new node
 * Return: pointer to the newly created node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *Noeud = NULL;

	Noeud = malloc(sizeof(binary_tree_t));
	if (Noeud == NULL)
		return (NULL);

	Noeud->n = value;
	Noeud->parent = parent;
	Noeud->left = NULL;
	Noeud->right = NULL;

	return (Noeud);
}
