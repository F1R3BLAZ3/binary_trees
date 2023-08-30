#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new left child node in a binary tree.
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 *
 * Description: This function inserts a new node with the given value as the
 * left child of the specified parent node. If the parent already has a left
 * child, the new node becomes the left child and the existing left child
 * becomes the left child of the new node. If memory allocation fails or if
 * the parent node is `NULL`, the function returns `NULL`. Otherwise, it
 * returns a pointer to the new node.
 *
 * Return: Pointer to the new left child node, or `NULL` on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = parent->left;
    new_node->right = NULL;

    if (parent->left != NULL)
        parent->left->parent = new_node;
    parent->left = new_node;

    return (new_node);
}
