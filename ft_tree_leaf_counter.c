#include "tree.h"

int ft_tree_leaf_counter(t_tree *root)
{
  if (!root)
    return (0);
  if (root->left == NULL && root->right == NULL)
    return (1);
  return (ft_tree_leaf_counter(root->left) + ft_tree_leaf_counter(root->right));
}