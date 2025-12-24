NAME= tree

SRCS= main.c ft_count_nodes.c ft_create_node.c ft_free_tree.c ft_insert_node.c\
	ft_print_tree.c ft_tree_height.c ft_tree_leaf_counter.c ft_is_bst.c ft_tree_sum.c ft_depth.c

OBJS=$(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	cc $^ -o $(NAME)

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all