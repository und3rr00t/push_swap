NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c parse_args.c push.c swap.c rotate.c reverse_rotate.c utils.c sort.c butterfly_sort.c \
	  libft/ft_atoi.c libft/ft_lstadd_back.c libft/ft_lstclear.c libft/ft_lstnew.c libft/ft_lstsize.c \
	  libft/ft_memcpy.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strlen.c \
	  libft/ft_isdigit.c libft/ft_lstlast.c \
	  ft_printf/ft_printf_hex_ptr.c ft_printf/ft_printf_utils.c ft_printf/ft_printf.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT) $(FTPF)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean
