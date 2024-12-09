#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_delete- Delete a binary tree
*@tree: Pointer to the parent node
*Return: Nothing void
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);
	if (node->left == NULL && node->right == NULL)
	return (1);
return (0);
}
