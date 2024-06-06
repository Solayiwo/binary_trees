#include "binary_trees.h"

/**
 * *binary_tree_insert_left - Entry point
 * Description: Function that inserts a node as the
 * left-child of another node
 * @parent: Pointer to the parent node to insert the left-child in
 * @value: Vvalue to store in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;
	parent->left = new_node;
	if (new_node->left)
		new_node->left->parent = new_node;

	return (new_node);
}
