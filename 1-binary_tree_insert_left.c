#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert values to the left child
 * @parent: The parent node
 * @value: The value to be inserted
 *
 * Return: Pointer to the created node or NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
		binary_tree_t *new_node = binary_tree_node(parent, value);

		if (new_node == NULL)
			return (NULL);

		if (parent->left != NULL)
		{
				new_node->left = parent->left;
				parent->left->parent = new_node;
		}

		parent->left = new_node;

		return (new_node);
}
