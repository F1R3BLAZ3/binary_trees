#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: Pointer to the node to be checked.
 *
 * Description: This function determines whether a given node is a leaf node in
 * a binary tree. A leaf node is a node that has no children, i.e., both its
 * left and right pointers are `NULL`. If the provided `node` parameter is
 * `NULL`, the function returns 0 (not a leaf). Otherwise, if the node is a
 * leaf, it returns 1; otherwise, it returns 0.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
