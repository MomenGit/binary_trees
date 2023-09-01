#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: size_t the count of leaves of a binary tree, or 0 on failure
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (tree == NULL)
		return (0);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (left_leaves + right_leaves + 1);
	else
		return (left_leaves + right_leaves);
}
