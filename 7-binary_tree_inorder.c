#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using inorder traversal.
 * @tree: Pointer to the root node of the tree to be traversed.
 * @func: Pointer to a function to be called for each node visited.
 *
 * Description: This function traverses a binary tree in an inorder manner,
 * starting from the leftmost node and visiting nodes in the following order:
 * left subtree -> root -> right subtree. For each visited node, the provided
 * function `func` is called, passing the integer value of the node as an
 * argument. If either the `tree` or `func` parameter is `NULL`, the function
 * has no effect.
 *
 * Return: None.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
