#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: Height.  If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_h, right_h = 0;

	if (tree == NULL)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h >= right_h)
		return (left_h + 1);
	return (right_h + 1);
}
/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: the Balance factor, if tree is NULL return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
