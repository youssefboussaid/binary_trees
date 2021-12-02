#include "binary_trees.h"
/**
 * binary_tree_nodes - function that
 * counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: amount.  If tree is NULL, the function must return 0
 * A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t amt = 1;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left && tree->right)
	{
		amt += binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right);
		return (amt);
	}
	else if (tree->left)
	{
		amt += binary_tree_nodes(tree->left);
		return (amt);
	}
	else if (tree->right)
	{
		amt += binary_tree_nodes(tree->right);
		return (amt);
	}
	else
		return (0);
}