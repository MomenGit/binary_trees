#include "binary_trees.h"
#include <stdlib.h>

/**
 * calc_tree_balance - measures the height of a binary tree
 *
 * @tree: a pointer to root node of the tree to measure the height
 * Return: size_t height of a binary tree, or 0 on failure
 */
long calc_tree_balance(const binary_tree_t *tree, int *is_balanced)
{
	long left_h, right_h;

	if (tree == NULL)
		return (-1);

	if (*is_balanced == 0)
		return (0);

	left_h = calc_tree_balance(tree->left, is_balanced);
	right_h = calc_tree_balance(tree->right, is_balanced);

	if (left_h == right_h)
		*is_balanced = 1;
	else
		*is_balanced = 0;

	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if binary tree is perfect, or 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_balanced;

	if (tree == NULL)
		return (0);

	is_balanced = 1;

	calc_tree_balance(tree, &is_balanced);

	return (is_balanced);
}
