#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Entry point
 * Description: Function that checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 0 if node is NULL
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
