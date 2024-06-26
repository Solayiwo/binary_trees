#include "binary_trees.h"

/**
 * binary_tree_depth - Entry point
 * Description: Function that measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of the tree, otherwise 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree && tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
