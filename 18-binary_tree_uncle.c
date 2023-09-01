#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: a pointer to the node to find the uncle
 * Return: binary_tree_t* to the uncle node, NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	grand_parent = node->parent->parent;

	if (grand_parent == NULL)
		return (NULL);

	if (node->parent == grand_parent->left)
		return (grand_parent->right);
	else
		return (grand_parent->left);
}
