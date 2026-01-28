# COMPILER
CC      := cc
CFLAGS  := -Wall -Wextra -Werror -g

# PROJECT
NAME    := push_swap

SRCS    :=  srcs/algorithm/pre_sort.c \
			srcs/algorithm/index.c \
            srcs/algorithm/sort.c \
            srcs/instructions/push.c \
            srcs/instructions/reverse_rotate.c \
            srcs/instructions/rotate.c \
            srcs/instructions/swap.c \
            srcs/parser/linked_list.c \
            srcs/parser/parser.c \
            srcs/parser/atol.c \
            srcs/parser/clear.c \
            srcs/main.c

OBJS    := $(SRCS:.c=.o)

# LIBS
LIBFT_DIR   := includes/libft
LIBFT       := $(LIBFT_DIR)/libft.a

PRINTF_DIR  := includes/ft_printf
PRINTF      := $(PRINTF_DIR)/libftprintf.a

# RULES
all: $(NAME)


$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	@printf "\n✔ BUILD COMPLETE\n"
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
	@echo "[LIBFT] compiling..."
	@$(MAKE) -C $(LIBFT_DIR) --no-print-directory

$(PRINTF):
	@echo "[PRINTF] compiling..."
	@$(MAKE) -C $(PRINTF_DIR) --no-print-directory

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "[CLEAN]"
	@rm -f $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean --no-print-directory
	@$(MAKE) -C $(PRINTF_DIR) clean --no-print-directory

fclean: clean
	@echo "[FCLEAN]"
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean --no-print-directory
	@$(MAKE) -C $(PRINTF_DIR) fclean --no-print-directory

re: fclean all

.PHONY: all clean fclean re banner init
