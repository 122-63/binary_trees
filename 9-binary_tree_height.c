#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	return (1 + (MAX(binary_tree_height(tree->left),
		 binary_tree_height(tree->right))));
}
