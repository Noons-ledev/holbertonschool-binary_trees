#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_height_child- Return the height of a tree from a given child
*@tree: Pointer to the root
*Return: Height
*/
int binary_tree_height_child(const binary_tree_t *tree)
{
int left_height, right_height;

	if (tree == NULL)
	return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
left_height = binary_tree_height_child(tree->left);
right_height = binary_tree_height_child(tree->right);
return (1 + (left_height > right_height ? left_height : right_height));
}

/**
*binary_tree_balance-the balance(height diff btwn left/right subtrees)
*@tree: Pointer to the root
*Return: Difference
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	return (0);
	if (tree->left == NULL && tree->right == NULL)
	return (0);
	left_height = binary_tree_height_child(tree->left);
	right_height = binary_tree_height_child(tree->right);
	return (left_height - right_height);

}
