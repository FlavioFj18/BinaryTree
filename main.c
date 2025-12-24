#include "tree.h"

int main(void)
{
  t_tree *root = ft_insert_node(NULL, 8);
  root = ft_insert_node(root, 7);
  root = ft_insert_node(root, 5);
  root = ft_insert_node(root, 0);
  root = ft_insert_node(root, -1);
  root = ft_insert_node(root, 2);
  root = ft_insert_node(root, 1);
  root = ft_insert_node(root, 3);
  root = ft_insert_node(root, 7);
  root = ft_insert_node(root, 6);
  root = ft_insert_node(root, 19);
  root = ft_insert_node(root, 14);
  root = ft_insert_node(root, 17);
  root = ft_insert_node(root, 10);

  ft_print_tree_pre_order(root);
  printf("\n++++++++++++++++++++++++++++++++++++++++\n");
  ft_print_tree_in_order(root);
  printf("\n++++++++++++++++++++++++++++++++++++++++\n");
  ft_print_tree_post_order(root);
  printf("\n\n\n");
  int flags[123] = {0};
  ft_print_tree(root, 0, 0, flags);
  //ft_print_tree_ai(root);
  printf("The tree has %d nodes\n", ft_count_nodes(root));
  printf("The tree has %d leafs\n", ft_tree_leaf_counter(root));
  //ft_print_tree_inorder(root, 0, 0);
  printf("height: %d\n", ft_tree_height(root));
  printf("Is BST: %d\n", ft_is_bst(root));
  //printf("BST: %d\n", ft_is_bst_range(root, INT_MIN, INT_MAX));
  printf("The result of sum is: %d\n", ft_tree_sum(root));
  printf("Minimum depth: %d\n", ft_minimum_depth(root));
  printf("Maximum depth: %d\n", ft_maximum_depth(root));
  ft_free_tree(root);
  return (0);
}
