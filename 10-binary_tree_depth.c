#include "binary_trees.h"
size_t recursive_tree_depth(const binary_tree_t *tree);


/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: pointer to the root node of the tree to measure the depth
* Return: 0 (If tree is NULL)
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_tree_depth(tree));
}

/**
* recursive_tree_depth - measures the depth of a binary tree recursively
* @tree: pointer to the root node of the tree to measure the depth
* Return: depth
*/
size_t recursive_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_tree_depth(tree->parent) + 1);
}
