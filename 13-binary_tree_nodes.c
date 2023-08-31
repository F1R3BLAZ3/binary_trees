#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes in a binary tree, excluding leaves.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Description: This function calculates the number of non-leaf nodes (nodes
 * with at least one child) in the given binary tree. If the input tree is
 * NULL, the function returns 0 since there are no nodes in an empty tree.
 *
 * Return: Number of non-leaf nodes in the binary tree, 0 if the tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}
