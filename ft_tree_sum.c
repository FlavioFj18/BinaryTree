#include "tree.h"

int ft_tree_sum(t_tree *root)
{
  if (!root)
    return (0);
  return (root->value + ft_tree_sum(root->left) + ft_tree_sum(root->right));
}