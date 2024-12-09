#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_nodes- Calculates the nodes with at least one child
*@tree: Pointer to the root
*Return: number of correponding nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes_left, nodes_right;
	if (tree == NULL)
	return (0);
	if (tree->left == NULL && tree->right == NULL)
	return (0);
	nodes_left = binary_tree_nodes(tree->left);
	nodes_right = binary_tree_nodes(tree->right);
	return (1 + nodes_left + nodes_right);
}
