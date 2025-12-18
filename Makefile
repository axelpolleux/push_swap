# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apolleux <apolleux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/18 13:50:00 by apolleux          #+#    #+#              #
#    Updated: 2025/12/18 20:13:08 by apolleux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      = cc
CFLAGS  = -Wall -Werror -Wextra
NAME    = push_swap.a
FOLDER_OUTPUT = lib

# ------------------ Sources ------------------ #
FILES =	includes/libft/ft_atoi.c			\
		includes/libft/ft_isdigit.c			\
		includes/ft_printf/ft_numb_utils.c	\
		includes/ft_printf/ft_printf.c		\
		includes/ft_printf/ft_putchar.c		\
		includes/ft_printf/ft_putstr.c		\
		includes/ft_printf/ft_strlen.c		\
		srcs/parser.c

OBJECTS = ${FILES:.c=.o}

# ------------------ Cyberpunk Colors ------------------ #
RESET   = \033[0m
BOLD    = \033[1m
DIM     = \033[2m

NEON_CYAN   = \033[1;36m
NEON_PINK   = \033[1;35m
NEON_GREEN  = \033[1;32m
NEON_PURPLE = \033[1;34m
NEON_RED    = \033[1;31m
NEON_YELLOW = \033[1;33m

ARROW = ${NEON_PURPLE}▶${RESET}

# ------------------ Animations ------------------ #
define LOADING
	@printf "${DIM}${NEON_CYAN}[${NEON_PINK}██${NEON_CYAN}░░░░░]${RESET}\r"; sleep 0.05
	@printf "${DIM}${NEON_CYAN}[${NEON_PINK}████${NEON_CYAN}░░░░]${RESET}\r"; sleep 0.05
	@printf "${DIM}${NEON_CYAN}[${NEON_PINK}██████${NEON_CYAN}░░]${RESET}\r"; sleep 0.05
	@printf "${DIM}${NEON_CYAN}[${NEON_PINK}████████]${RESET}\r"; sleep 0.05
	@printf "        \r"
endef

# ------------------ Title ------------------ #
define CYBER_TITLE
	@echo ""
	@echo "\033[1;35m██████╗ ██╗   ██╗███████╗██╗  ██╗     ███████╗██╗    ██╗ █████╗ ██████╗ \033[0m"
	@echo "\033[1;35m██╔══██╗██║   ██║██╔════╝██║  ██║     ██╔════╝██║    ██║██╔══██╗██╔══██╗\033[0m"
	@echo "\033[1;36m██████╔╝██║   ██║███████╗███████║     ███████╗██║ █╗ ██║███████║██████╔╝\033[0m"
	@echo "\033[1;36m██╔═══╝ ██║   ██║╚════██║██╔══██║     ╚════██║██║███╗██║██╔══██║██╔═══╝ \033[0m"
	@echo "\033[1;35m██║     ╚██████╔╝███████║██║  ██║     ███████║╚███╔███╔╝██║  ██║██║     \033[0m"
	@echo "\033[1;35m╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝     ╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝     \033[0m"
	@echo ""
endef

# ------------------ Rules ------------------ #
all:
	@$(CYBER_TITLE)
	@$(MAKE) --no-print-directory ${NAME}

${NAME}: ${OBJECTS}
	@echo "${NEON_GREEN}${BOLD}◆ Linking modules:${RESET}"
	@$(LOADING)
	@mkdir -p ${FOLDER_OUTPUT}
	@ar rcs ${FOLDER_OUTPUT}/${NAME} ${OBJECTS}
	@echo "  ${ARROW} ${NEON_CYAN}${FOLDER_OUTPUT}/${NAME}${RESET}"
	@echo "${NEON_GREEN}${BOLD}✔ System ready.${RESET}"

%.o: %.c
	@echo "${NEON_PINK}${BOLD}◆ Compiling:${RESET} ${NEON_CYAN}$<${RESET}"
	@$(LOADING)
	@${CC} ${CFLAGS} -c $< -o $@
	@echo "  ${ARROW} ${NEON_YELLOW}$@${RESET}"

clean:
	@echo "${NEON_PURPLE}${BOLD}◆ Purging object files:${RESET}"
	@for file in ${OBJECTS}; do \
		echo "  ${ARROW} ${DIM}${NEON_CYAN}$$file${RESET}"; \
	done
	@$(LOADING)
	@rm -f ${OBJECTS}
	@echo "${NEON_PURPLE}${BOLD}✔ Memory cleaned.${RESET}"

fclean: clean
	@echo "${NEON_RED}${BOLD}◆ Destroying core library:${RESET}"
	@echo "  ${ARROW} ${NEON_YELLOW}${FOLDER_OUTPUT}/${NAME}${RESET}"
	@$(LOADING)
	@rm -f ${FOLDER_OUTPUT}/${NAME}
	@echo "${NEON_RED}${BOLD}✖ System wiped.${RESET}"

re: fclean all

.PHONY: all clean fclean re
