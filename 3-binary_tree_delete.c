#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to be deleted.
 *
 * Description: This function recursively deletes the entire binary tree rooted
 * at the specified node. It uses a post-order traversal to ensure that child
 * nodes are deleted before their parent nodes. If the `tree` parameter is
 * `NULL`, the function simply returns, since there's nothing to delete.
 * The memory allocated for each node is also freed during this process.
 *
 * Return: None.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
