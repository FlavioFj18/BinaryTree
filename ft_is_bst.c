#include "tree.h"

int ft_is_bst_range(t_tree *root, int min, int max)
{
  if (!root)
      return (1);
  if (root->value <= min || root->value >= max)
      return (0);
    return (
      ft_is_bst_range(root->left, min, root->value) &&
      ft_is_bst_range(root->right, root->value, max)
  );
}

int ft_is_bst(t_tree *root)
{
    return (ft_is_bst_range(root, INT_MIN, INT_MAX));
}