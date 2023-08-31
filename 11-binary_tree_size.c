#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Description: This function calculates the size of a given binary tree, which
 * is the total number of nodes in the tree. If the input tree is NULL, the
 * function returns 0 since the size of an empty tree is 0.
 *
 * Return: Size of the binary tree, 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
