#include "tree.h"

void ft_free_tree(t_tree *root)
{
  if (!root)
    return ;
  ft_free_tree(root->left);
  ft_free_tree(root->right);
  free(root);
}