#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
*calculate_expected_nodes- Calcul le nombre de nodes attendu arbre parfait
*@tree_height: la hauteur de l'arbre
*Return: Nodes expected for a perfect tree
*/
size_t calculate_expected_nodes(size_t tree_height)
{
size_t i, expected_number = 1;
for (i = 0; i <= tree_height; i++)
{
	expected_number *= 2;
}
return (expected_number - 1);
}
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
/**
*TotalNodes-Returns the number of nodes in a binary tree
*@tree:Pointer to root
*Return: Size_t nb of nodes
*/
size_t TotalNodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
return (1 + TotalNodes(tree->left) + TotalNodes(tree->right));
}
/**
*binary_tree_is_perfect- Finds out if tree is perfect
*@tree: Pointer to the root
*Return: 1 for True, 0 for false
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t Number_of_nodes, Expected_number, tree_height;

	if (tree == NULL)
	return (0);
Number_of_nodes = TotalNodes(tree);
tree_height = binary_tree_height(tree);
Expected_number = calculate_expected_nodes(tree_height);
if (Number_of_nodes == Expected_number)
return (1);
return (0);
}
