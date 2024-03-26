#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function return 0, else return height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t lef = 0, rig = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rig = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return ((lef > rig) ? lef : rig);
	}
	return (0);
}
