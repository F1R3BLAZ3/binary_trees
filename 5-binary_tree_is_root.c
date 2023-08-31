#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root in a binary tree.
 * @node: Pointer to the node to be checked.
 *
 * Description: This function determines whether a given node is a root node in
 * a binary tree. A root node is a node that has no parent, i.e., its parent
 * pointer is `NULL`. If the provided `node` parameter is `NULL`, the function
 * returns 0 (not a root). Otherwise, if the node is a root, it returns 1;
 * otherwise, it returns 0.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
