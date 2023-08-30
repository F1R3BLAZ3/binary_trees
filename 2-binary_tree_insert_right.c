#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new right child node in a binary tree.
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 *
 * Description: This function inserts a new node with the given value as the
 * right child of the specified parent node. If the parent already has a right
 * child, the new node becomes the right child and the existing right child
 * becomes the right child of the new node. If memory allocation fails or if
 * the parent node is `NULL`, the function returns `NULL`. Otherwise, it
 * returns a pointer to the new node.
 *
 * Return: Pointer to the new right child node, or `NULL` on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new_node;
	parent->right = new_node;

	return (new_node);
}
