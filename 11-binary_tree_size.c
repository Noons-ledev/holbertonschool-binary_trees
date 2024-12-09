#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_size- Calculates the size of a binary tree
*@tree: Pointer to the root
*Return: Total size (number of nodes)
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_side, right_side;
	if (tree == NULL)
	return (0);
left_side = binary_tree_size(tree->left);
right_side = binary_tree_size(tree->right);
return ( 1 + left_side + right_side);
}
