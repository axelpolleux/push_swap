# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/18 13:50:00 by apolleux          #+#    #+#              #
#    Updated: 2026/01/06 10:38:04 by apolleux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = cc
CFLAGS  = -Wall -Werror -Wextra
NAME    = push_swap

# ------------------ Sources ------------------ #
FILES =	srcs/main.c \
		srcs/parser.c

INCLUDES =	-I includes/libft/libft.h \
			-I includes/ft_printf/ft_printf.h \
			-I includes/push_swap.h

LIBFT = includes/libft/libft.a
PRINTF = includes/ft_printf/libftprintf.a


OBJECTS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT) $(PRINTF)
	$(CC) $(OBJECTS) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
	$(MAKE) -C includes --no-print-directory

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
