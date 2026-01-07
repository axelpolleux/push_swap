CC      = cc
CFLAGS  = -Wall -Wextra -Werror -g
NAME    = push_swap

SRCS =	srcs/main.c \
		srcs/parser.c

OBJS = $(SRCS:.c=.o)

LIBFT_DIR   = includes/libft
LIBFT       = $(LIBFT_DIR)/libft.a

PRINTF_DIR  = includes/ft_printf
PRINTF      = $(PRINTF_DIR)/libftprintf.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(PRINTF):
	make -C $(PRINTF_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C $(LIBFT_DIR) clean
	make -C $(PRINTF_DIR) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	make -C $(PRINTF_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
