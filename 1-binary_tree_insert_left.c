#include "binary_trees.h"

/**
 * binary_tree_insert_left - To insert left child
 * @parent: Parent pointer
 * @value: Node value
 *
 * Return: If parent is NULL or an error occurs
 *
 * Description: to insert node to left
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
