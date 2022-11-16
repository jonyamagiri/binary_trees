#include "binary_trees.h"

/**
* binary_tree_is_root- checks if a given node is a root
* @node: pointer to the node to check
* Return: 1 (if node is a root)
*	0 (otherwise or if node is NULL)
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	int root_node = 0;

	if (node && (node->parent == NULL))
		root_node = 1;

	return (root_node);
}
