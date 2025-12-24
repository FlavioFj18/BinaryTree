#include "tree.h"

int ft_tree_height(t_tree *root)
{
    int left_height;
    int right_height;

    if (!root)
        return (0);
    left_height = ft_tree_height(root->left);
    right_height = ft_tree_height(root->right);
    if (left_height > right_height)
        return (left_height + 1);
    return (right_height + 1);
}
