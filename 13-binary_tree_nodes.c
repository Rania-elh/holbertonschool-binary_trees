#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Returns: If tree is NULL, the function must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
 		count = 1;
	}
	if (tree->right != NULL)
	{
		count = 1;
	}
	return (count + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}