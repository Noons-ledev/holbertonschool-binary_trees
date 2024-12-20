#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_leaves- Calculates the leaves of a binary tree
*@tree: Pointer to the root
*Return: Total leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (tree == NULL)
	return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
left_leaves = binary_tree_leaves(tree->left);
right_leaves = binary_tree_leaves(tree->right);
return (left_leaves + right_leaves);
}
