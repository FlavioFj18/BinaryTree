#include "tree.h"

int ft_count_nodes(t_tree *root)
{
  if (!root)
    return (0);
  return (1 + ft_count_nodes(root->left) + ft_count_nodes(root->right));
}