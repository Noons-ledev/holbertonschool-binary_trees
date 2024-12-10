#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
*binary_tree_sibling- trouve le frere d'une node
*@node: Pointeur sur la node
*Return: Pointeur sur sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp = node;

	if (node == NULL || node->parent == NULL)
	return (NULL);
	temp = temp->parent;
	if (temp->right == node && temp->left != NULL)
	{
		temp = temp->left;
		return (temp);
	}
	else if (temp->left == node && temp->right != NULL)
	{
		temp = temp->right;
		return (temp);
	}
	else
	return (NULL);
}
