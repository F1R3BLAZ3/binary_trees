#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using postorder traversal.
 * @tree: Pointer to the root node of the tree to be traversed.
 * @func: Pointer to a function to be called for each node visited.
 *
 * Description: This function traverses a binary tree in a postorder manner,
 * starting from the leftmost node and visiting nodes in the following order:
 * left subtree -> right subtree -> root. For each visited node, the provided
 * function `func` is called, passing the integer value of the node as an
 * argument. If either the `tree` or `func` parameter is `NULL`, the function
 * has no effect.
 *
 * Return: None.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
