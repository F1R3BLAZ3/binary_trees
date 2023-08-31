#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle for.
 *
 * Description: This function finds the uncle of a given node in a binary tree.
 * The uncle of a node is the sibling of its parent. If the node is NULL, or if
 * its parent is NULL, or if its parent's parent is NULL, the function returns
 * NULL. If the node's parent is the left child of its grandparent, the
 * function returns the right child of the grandparent (uncle). If the node's
 * parent is the right child of its grandparent, the function returns the left
 * child of the grandparent.
 *
 * Return: Pointer to the uncle node, or NULL if the uncle is not found.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
