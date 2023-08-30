#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: Pointer to the parent node of the new node.
 * @value: Value to be stored in the new node.
 *
 * Description: This function creates a new binary tree node with the given
 * value and parent node. The parent parameter is a pointer to the parent node
 * of the new node. The function allocates memory for the new node using the
 * `malloc` function. If memory allocation fails, the function returns `NULL`.
 * Otherwise, it initializes the new node's value, parent, left,
 * and right pointers and returns a pointer to the new node.
 *
 * Return: Pointer to the new binary tree node, or `NULL` on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
