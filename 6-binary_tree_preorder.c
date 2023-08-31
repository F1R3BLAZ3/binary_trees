#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using preorder traversal.
 * @tree: Pointer to the root node of the tree to be traversed.
 * @func: Pointer to a function to be called for each node visited.
 *
 * Description: This function traverses a binary tree in a preorder manner,
 * starting from the root node and visiting nodes in the following order:
 * root -> left subtree -> right subtree. For each visited node, the provided
 * function `func` is called, passing the integer value of the node as an
 * argument. If either the `tree` or `func` parameter is `NULL`, the function
 * has no effect.
 *
 * Return: None.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
