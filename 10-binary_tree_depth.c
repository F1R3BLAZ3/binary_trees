#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node for which to calculate the depth.
 *
 * Description: This function calculates the depth of a given node in a binary
 * tree. The depth of a node is the number of edges from the node to the root
 * node. If the input node is NULL, the function returns 0 since the depth of
 * a non-existent node is not defined.
 *
 * Return: Depth of the node, 0 if the node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
