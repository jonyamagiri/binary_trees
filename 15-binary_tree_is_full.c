#include "binary_trees.h"

/**
* recursive_tree_full - checks if a binary tree is full recursively
* @tree: pointer to the root node of the tree to check
* Return: 0 (If tree is NULL)
*/
int recursive_tree_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (recursive_tree_full(tree->left) * recursive_tree_full(tree->right));
}

/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: pointer to the root node of the tree to check
* Return: 0 (If tree is NULL)
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_tree_full(tree));
}
