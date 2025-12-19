NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c utils.c swap.c push.c rotate.c revers_rotate.c
OBJ = $(SRC:.c=.o)
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
FTPF_DIR=./ft_printf
FTPF=$(FTPF_DIR)/libftprintf.a
all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) $(FTPF)
	$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT_DIR) -lft -L$(FTPF_DIR) -lftprintf -o $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR) bonus
$(FTPF):
	@make -C $(FTPF_DIR)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@make -C $(LIBFT_DIR) clean
	@make -C $(FTPF_DIR) clean
fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean
	@make -C $(FTPF_DIR) fclean
re: fclean all

.PHONY: clean
