# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/03 09:42:52 by apolleux          #+#    #+#              #
#    Updated: 2025/11/05 18:43:38 by apolleux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

FILES = ft_printf.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_numb_utils.c

# BONUSES =

OBJECTS = ${FILES:.c=.o}
# BONUS_OBJECTS = ${BONUSES:.c=.o}

all: ${NAME}

${NAME}: ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}

%.o: %.c
	${CC} ${CFLAGS} $< -c -o $@

# bonus: ${NAME} ${OBJECTS} ${BONUS_OBJECTS}
# 	ar rcs ${NAME} ${OBJECTS} ${BONUS_OBJECTS}

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY: all bonus clean fclean re
