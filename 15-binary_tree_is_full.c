#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if binary tree is full, or 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_t, right_t;

	if (tree == NULL)
		return (0);

	if ((tree->left != NULL && tree->right == NULL) ||
		(tree->left == NULL && tree->right != NULL))
		return (0);

	if (tree->left != NULL && tree->right != NULL)
	{
		left_t = binary_tree_is_full(tree->left);
		right_t = binary_tree_is_full(tree->right);
		return (left_t && right_t);
	}

	return (1);
}
