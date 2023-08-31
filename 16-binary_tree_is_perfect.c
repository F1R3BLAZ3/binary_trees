#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is a full binary tree.
 * @tree: Pointer to the root node of the binary tree.
 *
 * Description: This function determines whether the given binary tree is a
 * full binary tree or not. A full binary tree is a binary tree in which each
 * node has either zero or two children.
 *
 * Return: 1 if the tree is a full binary tree, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}

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
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Description: This function calculates the height of a binary tree, which
 * is the length of the longest path from the root node to any leaf node in
 * the tree. If the binary tree is empty (NULL), the function returns 0.
 *
 * Return: Height of the binary tree, 0 if the tree is empty.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = 1 + binary_tree_height(tree->left);
	right_height = 1 + binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}

#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_is_full(tree) &&
		binary_tree_nodes(tree) ==
		    (size_t)((1 << binary_tree_height(tree)) - 1));
}
