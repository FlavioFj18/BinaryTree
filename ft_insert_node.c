#include "tree.h"

t_tree *ft_insert_node(t_tree *root, int val)
{
  if (!root)
    return (ft_create_node(val));
  if (root->value > val)
    root->left = ft_insert_node(root->left, val);
  else if (root->value < val)
     root->right = ft_insert_node(root->right, val);
  return (root);
}