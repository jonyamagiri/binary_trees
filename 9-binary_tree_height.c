#include "binary_trees.h"
size_t recursive_tree_height(const binary_tree_t *tree);


/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: 0 (If tree is NULL)
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_tree_height(tree) - 1);
}

/**
* recursive_tree_height- measures the height of a binary tree recursively
* @tree: pointer to the root node of the tree to measure the height
* Return: height
*/
size_t recursive_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	else
	{
		height_left = recursive_tree_height(tree->left);
		height_right = recursive_tree_height(tree->right);

		if (height_left > height_right)
			return (height_left + 1);
		else
			return (height_right + 1);
	}
}
