#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of a node in binary tree
 * @tree: A pointer to the node to measure the depth
 * Return: If NULL return 0, else return the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dpt = 0;

	while (tree != NULL && tree->parent)
	{
		dpt++;
		tree = tree->parent;
	}
	return (dpt);
}
