#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 * Tree is null - do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
