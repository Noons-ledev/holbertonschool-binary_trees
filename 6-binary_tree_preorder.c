#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_is_root- Checks if a given node is a leaf
*@node: Pointer to the node to check
*Return: 1 if root, or 0
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
