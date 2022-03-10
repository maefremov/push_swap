NAME=push_swap
CC=gcc
CFLAGS=-Wall -Wextra -Werror -MMD -I libft

SRC_FILES=butterfly.c			\
		commands.c				\
		commands1.c				\
		create_stack.c			\
		init_stacks.c			\
		num_utils.c				\
		parsing.c				\
		push_swap.c				\
		sort35.c				\
		utils.c					\
		validation.c			\

OBJ_DIR=objs
OBJ=$(addprefix $(OBJ_DIR)/,$(SRC_FILES:.c=.o))

DEP=$(addprefix $(OBJ_DIR)/,$(SRC_FILES:.c=.d))
INC_FILES=push_swap.h
LIBFT=libft/libft.a

all: liba $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(OBJ) -L libft -lft -o $(NAME)

-include $(DEP)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

liba:
	@make -C libft

clean:
	@make -C libft clean
	rm -rf $(OBJ_DIR)

fclean: clean
	@make -C libft fclean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re libft