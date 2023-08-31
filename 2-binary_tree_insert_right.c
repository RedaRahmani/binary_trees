#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts right
 * @parent: pointer in the Noeud
 * @value: value
 *
 * Return: pointer in creater Noeud
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Noeud = NULL, *previous_left_child = NULL;

	if (!parent)
		return (NULL);

	Noeud = binary_tree_node(parent, value);
	if (!Noeud)
		return (NULL);

	if (parent->right)
	{
		previous_left_child = parent->right;
		parent->right = Noeud;
		Noeud->right = previous_left_child;
		previous_left_child->parent = Noeud;
	}
	else
		parent->right = Noeud;

	return (Noeud);
}
