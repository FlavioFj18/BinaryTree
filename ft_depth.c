#include "tree.h"

int ft_maximum_depth(t_tree *root)
{
      int left_depth;
    int right_depth;

    if (!root)
        return (0);
    left_depth = ft_maximum_depth(root->left);
    right_depth = ft_maximum_depth(root->right);
    if (left_depth > right_depth)
        return (left_depth + 1);
    return (right_depth + 1);
}

int ft_minimum_depth(t_tree *root)
{
  int left_depth;
  int right_depth;

  if (!root)
      return (0);
  if (!root->left)
      return (ft_minimum_depth(root->right) + 1);
  if (!root->right)
      return (ft_minimum_depth(root->left) + 1);
  left_depth = ft_minimum_depth(root->left);
  right_depth = ft_minimum_depth(root->right);
  if (left_depth < right_depth)
      return (left_depth + 1);
  return (right_depth + 1);
}
