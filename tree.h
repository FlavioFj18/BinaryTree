#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct s_tree_node
{
  int value;
  struct s_tree_node *left;
  struct s_tree_node *right;
} t_tree;

int ft_is_bst(t_tree *root);
int ft_is_bst_range(t_tree *root, int min, int max);
int ft_tree_sum(t_tree *root);
int ft_minimum_depth(t_tree *root);
int ft_maximum_depth(t_tree *root);
t_tree *ft_create_node(int val);
void  ft_print_tree_pre_order(t_tree *root);
void  ft_print_tree_in_order(t_tree *root);
void  ft_print_tree_post_order(t_tree *root);
void  ft_print_tree(t_tree *root, int level, int dir, int *flags);
void ft_print_tree_inorder(t_tree *root, int level, int dir);
int ft_tree_leaf_counter(t_tree *root);
void ft_print_tree_ai(t_tree *root);
void ft_free_tree(t_tree *root);
int ft_count_nodes(t_tree *root);
int ft_tree_height(t_tree *root);
t_tree *ft_insert_node(t_tree *root, int val);

#endif
