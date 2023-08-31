#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a given node in a binary tree.
 * @node: Pointer to the node for which to find the sibling.
 *
 * Description: This function finds the sibling node of the given node in a
 * binary tree. The sibling of a node is another node that shares the same
 * parent.
 *
 * Return: Pointer to the sibling node, or NULL if the node has no sibling or
 * if the input node is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
