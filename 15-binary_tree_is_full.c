#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_is_full- Finds out the full type of a binary tree
*@tree: Pointer to the root
*Return: 1 for True, 0 for false
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (1);
	if (tree->left == NULL && tree->right == NULL)
	return (1);
	if (tree->left != NULL && tree->right != NULL)
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

return (0);
}
