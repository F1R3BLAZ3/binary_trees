#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Description: This function calculates the number of leaf nodes in the given
 * binary tree. If the input tree is NULL, the function returns 0 since there
 * are no leaves in an empty tree.
 *
 * Return: Number of leaf nodes in the binary tree, 0 if the tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
