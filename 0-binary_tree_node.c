#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_node- Add a node to a binary tree
*@parent: Pointer to the parent node
*@value: Value to store in the node
*Return: Pointer to the node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	return (NULL);
new_node->parent = parent;
new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;
return (new_node);
}
