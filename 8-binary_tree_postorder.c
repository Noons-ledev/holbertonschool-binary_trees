#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_postorder- Checks for a tree in postorder
*@tree: Pointer to the root
*@func: pointer to function
*Return: nothing void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
