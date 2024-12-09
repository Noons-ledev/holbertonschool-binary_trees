#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_height- Return the height of a tree from a given node
*@tree: Pointer to the root
*Return: Height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

	if (tree == NULL)
	return (0);
if (tree->left == NULL && tree->right == NULL)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (1 + (left_height > right_height ? left_height : right_height));
}
