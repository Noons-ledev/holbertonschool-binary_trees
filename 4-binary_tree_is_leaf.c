#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_is_leaf- Checks if a given node is a leaf
*@node: Pointer to the node to check
*Return: 1 if leaf, or 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);
	if (node->left == NULL && node->right == NULL)
	return (1);
return (0);
}
