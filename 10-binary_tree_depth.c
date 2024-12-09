#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_depth- Return the height of a tree from a given node
*@tree: Pointer to the root
*Return: Depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node_parent;

	if (tree == NULL)
	return (0);
if (tree->parent == NULL)
return (0);
node_parent = binary_tree_depth(tree->parent);
return (1 + (node_parent));
}
