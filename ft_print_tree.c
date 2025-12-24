#include "tree.h"
#include <stdio.h>

void  ft_print_tree_pre_order(t_tree *root)
{
  if (root != NULL)
  {
    printf(" { %d", root->value);
    ft_print_tree_pre_order(root->left);
    ft_print_tree_pre_order(root->right);
    printf(" } ");
  }
}

void  ft_print_tree_in_order(t_tree *root)
{
  if (root != NULL)
  {
    printf(" ( ");
    ft_print_tree_in_order(root->left);
    printf("%d", root->value);
    ft_print_tree_in_order(root->right);
    printf(" ) ");
  }
}

void ft_print_tree_inorder(t_tree *root, int level, int dir)
{
    if (root == NULL)
        return;

    ft_print_tree_inorder(root->left, level + 1, 1);
    for (int i = 0; i < level; i++)
        printf("        ");
    if (level > 0)
    {
        if (dir == 1)
            printf("┌─── ");
        else
            printf("└─── ");
    }
    printf("[%d]\n", root->value);
    ft_print_tree_inorder(root->right, level + 1, 0);
}

void  ft_print_tree_post_order(t_tree *root)
{
  if (root != NULL)
  {
    printf(" [ ");
    ft_print_tree_post_order(root->left);
    ft_print_tree_post_order(root->right);
    printf("%d", root->value);
    printf(" ] ");
  }
}

void  ft_print_tree(t_tree *root, int level, int dir, int *flags)
{
  int i = 0;
  if (root != NULL)
  {
    while (i < (level - 1))
    {
      if (flags[i])
        printf("│ ");
      else
        printf("    ");
      i++;
    }
    if (level > 0)
    {
      if (dir == 0)
      {
        printf("├── ");
        flags[level - 1] = 1;
      }
      if (dir == 1)
      {
        printf("└── ");
        flags[level - 1] = 0;
      }
    }
    printf("%d\n", root->value);
    if (root->left && root->right)
    {
        ft_print_tree(root->left, level + 1, 0, flags);
        ft_print_tree(root->right, level + 1, 1, flags);
    }
    else if (root->left)
        ft_print_tree(root->left, level + 1, 1, flags);
    else if (root->right)
        ft_print_tree(root->right, level + 1, 1, flags);
  }
}


void ft_print_tree_recursive(t_tree *root, int level, int dir, int *flags)
{
    int i = 0;
    if (root == NULL)
        return;
    i = 0;
    while (i < (level - 1))
    {
        if (flags[i])
            printf("│   "); 
        else
            printf("    ");
        i++;
    }
    if (level > 0)
    {
        if (dir == 0)
        {
            printf("├── ");
            flags[level - 1] = 1;
        }
        else
        {
            printf("└── ");
            flags[level - 1] = 0;
        }
    }
    printf("%d\n", root->value);
    if (root->left && root->right)
    {
        ft_print_tree_recursive(root->left, level + 1, 0, flags);
        ft_print_tree_recursive(root->right, level + 1, 1, flags);
    }
    else if (root->left)
        ft_print_tree_recursive(root->left, level + 1, 1, flags);
    else if (root->right)
        ft_print_tree_recursive(root->right, level + 1, 1, flags);
}
void ft_print_tree_ai(t_tree *root)
{
    int flags[100] = {0};
    ft_print_tree_recursive(root, 0, 1, flags);
}
