#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes in a binary tree with at least 1 child
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes in the binary tree with at least 1 child,
 *         0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	}

	return (0);
}

