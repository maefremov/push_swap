NAME=push_swap
NAME2=checker
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

SRC2_FILES=get_next_line.c		\
		get_next_line_utils.c	\
		commands.c				\
		commands1.c				\
		create_stack.c			\
		init_stacks.c			\
		num_utils.c				\
		parsing.c				\
		checker.c				\
		utils.c					\
		validation.c			\


OBJ_DIR=objs
OBJ=$(addprefix $(OBJ_DIR)/,$(SRC_FILES:.c=.o))
OBJ2=$(addprefix $(OBJ_DIR)/,$(SRC2_FILES:.c=.o))

DEP=$(addprefix $(OBJ_DIR)/,$(SRC_FILES:.c=.d))
DEP2=$(addprefix $(OBJ_DIR)/,$(SRC2_FILES:.c=.d))
INC_FILES=push_swap.h get_next_line.h
LIBFT=libft/libft.a

all: liba $(NAME)
$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(OBJ) -L libft -lft -o $(NAME)

-include $(DEP)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

bonus: liba $(NAME2)
$(NAME2): $(OBJ2) $(LIBFT)
	$(CC) $(OBJ2) -L libft -lft -o $(NAME2)

-include $(DEP2)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

liba: 
	@make -C libft

clean:
	@make -C libft clean
	rm -rf $(OBJ_DIR)

fclean: clean
	#@make -C libft fclean
	rm -rf $(NAME)
	rm -rf $(NAME2)

re: fclean all

.PHONY : all clean fclean re libft bonus