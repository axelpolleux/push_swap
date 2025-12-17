# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/15 13:18:08 by apolleux          #+#    #+#              #
#    Updated: 2025/12/15 18:55:10 by apolleux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap.a
FOLDER_OUTPUT = lib

FILES =	includes/libft/*.c


OBJECTS = ${FILES:.c=.o}

all: ${NAME}

${NAME}: ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}

%.o: %.c
# 	cat $<
	${CC} ${CFLAGS} $< -c -o $@

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY:
	re all fclean
