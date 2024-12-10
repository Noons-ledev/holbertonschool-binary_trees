#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
*binary_tree_uncle- trouve l'oncle d'une node
*@node: Pointeur sur la node
*Return: Pointeur sur uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
		binary_tree_t *temp = node;
		binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	return (NULL);
	temp = temp->parent;
	parent = temp;
	if (temp->parent == NULL)
	return (NULL);
	temp = temp->parent;
	if (temp->right == parent && temp->left != NULL)
	{
		temp = temp->left;
		return (temp);
	}
	else if (temp->left == parent && temp->right != NULL)
	{
		temp = temp->right;
		return (temp);
	}
	else
	return (NULL);
}
