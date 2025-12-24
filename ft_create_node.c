#include "tree.h"

t_tree *ft_create_node(int val)
{
  t_tree *node;

  node = (t_tree *)malloc(sizeof(t_tree));
  node->value = val;
  node->left = NULL;
  node->right = NULL;
  return (node);
}

