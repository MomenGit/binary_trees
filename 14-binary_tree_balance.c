#include "binary_trees.h"
#include <stdlib.h>

/**
 * calc_tree_height - measures the height of a binary tree
 *
 * @tree: a pointer to root node of the tree to measure the height
 * Return: size_t height of a binary tree, or 0 on failure
 */
long calc_tree_height(const binary_tree_t *tree)
{
	long left_h, right_h;

	if (tree == NULL)
		return (-1);

	left_h = calc_height(tree->left);
	right_h = calc_height(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: int the balance of a binary tree, or 0 on failure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = calc_height(tree->left);
	right_h = calc_height(tree->right);

	return (left_h - right_h);
}
