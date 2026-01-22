# =====================[ PUSH_SWAP :: CYBERPUNK MAKEFILE ]===================== #

# ──────────────── COMPILER ──────────────── #
CC      := cc
CFLAGS  := -Wall -Wextra -Werror -g

# ──────────────── PROJECT ──────────────── #
NAME    := push_swap

SRCS    :=  srcs/algorithm/chunk.c \
            srcs/algorithm/index.c \
            srcs/algorithm/sort.c \
            srcs/instructions/push.c \
            srcs/instructions/reverse_rotate.c \
            srcs/instructions/rotate.c \
            srcs/instructions/swap.c \
            srcs/parser/linked_list.c \
            srcs/parser/parser.c \
            srcs/parser/atol.c \
            srcs/main.c

OBJS    := $(SRCS:.c=.o)

# ──────────────── LIBS ──────────────── #
LIBFT_DIR   := includes/libft
LIBFT       := $(LIBFT_DIR)/libft.a

PRINTF_DIR  := includes/ft_printf
PRINTF      := $(PRINTF_DIR)/libftprintf.a

# ──────────────── PROGRESS ──────────────── #
TOTAL_FILES := $(words $(SRCS))
PROGRESS_FILE := .progress
BAR_SIZE := 30

# ──────────────── COLORS ──────────────── #
RESET   = \033[0m
BOLD    = \033[1m
CYAN    = \033[38;5;51m
PURPLE  = \033[38;5;141m
PINK    = \033[38;5;205m
GREEN   = \033[38;5;82m
RED     = \033[38;5;196m
GRAY    = \033[38;5;245m
NEON    = \033[38;5;45m

# ──────────────── LOGO ──────────────── #
define LOGO
$(PURPLE)
██████╗ ██╗   ██╗███████╗██╗  ██╗        ███████╗██╗    ██╗ █████╗ ██████╗
██╔══██╗██║   ██║██╔════╝██║  ██║        ██╔════╝██║    ██║██╔══██╗██╔══██╗
██████╔╝██║   ██║███████╗███████║        ███████╗██║ █╗ ██║███████║██████╔╝
██╔═══╝ ██║   ██║╚════██║██╔══██║        ╚════██║██║███╗██║██╔══██║██╔═══╝
██║     ╚██████╔╝███████║██║  ██║███████╗███████║╚███╔███╔╝██║  ██║██║
╚═╝      ╚═════╝ ╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝ ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝

$(CYAN)              ░ apolleux
$(RESET)
endef
export LOGO

# ──────────────── PROGRESS BAR ──────────────── #
define progress_bar
	@count=$$(cat $(PROGRESS_FILE)); \
	percent=$$((count * 100 / $(TOTAL_FILES))); \
	filled=$$((count * $(BAR_SIZE) / $(TOTAL_FILES))); \
	empty=$$(( $(BAR_SIZE) - filled )); \
	printf "\r$(NEON)[BUILD]$(RESET) ["; \
	printf "%0.s█" $$(seq 1 $$filled); \
	printf "%0.s░" $$(seq 1 $$empty); \
	printf "] $(GREEN)%3d%%$(RESET)" $$percent;
endef

# ──────────────── RULES ──────────────── #
all: init banner $(NAME)

init:
	@echo 0 > $(PROGRESS_FILE)

banner:
	@clear
	@echo "$$LOGO"

$(NAME): $(LIBFT) $(PRINTF) $(OBJS)
	@printf "\n$(GREEN)✔ BUILD COMPLETE$(RESET)\n"
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)
	@rm -f $(PROGRESS_FILE)

$(LIBFT):
	@echo "$(PINK)[LIBFT]$(RESET) compiling..."
	@$(MAKE) -C $(LIBFT_DIR) --no-print-directory

$(PRINTF):
	@echo "$(PINK)[PRINTF]$(RESET) compiling..."
	@$(MAKE) -C $(PRINTF_DIR) --no-print-directory

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@count=$$(cat $(PROGRESS_FILE)); \
	echo $$((count + 1)) > $(PROGRESS_FILE)
	$(call progress_bar)

clean:
	@echo "$(RED)[CLEAN]$(RESET)"
	@rm -f $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean --no-print-directory
	@$(MAKE) -C $(PRINTF_DIR) clean --no-print-directory

fclean: clean
	@echo "$(RED)[FCLEAN]$(RESET)"
	@rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean --no-print-directory
	@$(MAKE) -C $(PRINTF_DIR) fclean --no-print-directory

re: fclean all

.PHONY: all clean fclean re banner init
