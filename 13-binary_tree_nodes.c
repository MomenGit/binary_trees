#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: size_t the count of leaves of a binary tree, or 0 on failure
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (left_nodes + right_nodes + 1);
	else
		return (left_nodes + right_nodes);
}
