## testing

```Bash
make
make clean
./push_swap <args>
```

### my test

```Bash
make re
```
```
rm -f main.o parse_args.o push.o swap.o rotate.o reverse_rotate.o utils.o sort.o turk_sort.o turk_utils.o turk_cost.o turk_move.o
make[1]: Entering directory '/home/und3rr00t/push_swap/turk_algo/libft'
rm -f ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strchr.o ft_strdup.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o ft_lstadd_back_bonus.o ft_lstadd_front_bonus.o ft_lstclear_bonus.o ft_lstdelone_bonus.o ft_lstiter_bonus.o ft_lstlast_bonus.o ft_lstmap_bonus.o ft_lstnew_bonus.o ft_lstsize_bonus.o
make[1]: Leaving directory '/home/und3rr00t/push_swap/turk_algo/libft'
make[1]: Entering directory '/home/und3rr00t/push_swap/turk_algo/ft_printf'
rm -f ft_printf.o ft_printf_utils.o ft_printf_hex_ptr.o
make[1]: Leaving directory '/home/und3rr00t/push_swap/turk_algo/ft_printf'
rm -f push_swap
make[1]: Entering directory '/home/und3rr00t/push_swap/turk_algo/libft'
rm -f ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strchr.o ft_strdup.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o ft_lstadd_back_bonus.o ft_lstadd_front_bonus.o ft_lstclear_bonus.o ft_lstdelone_bonus.o ft_lstiter_bonus.o ft_lstlast_bonus.o ft_lstmap_bonus.o ft_lstnew_bonus.o ft_lstsize_bonus.o
rm -f libft.a
make[1]: Leaving directory '/home/und3rr00t/push_swap/turk_algo/libft'
make[1]: Entering directory '/home/und3rr00t/push_swap/turk_algo/ft_printf'
rm -f ft_printf.o ft_printf_utils.o ft_printf_hex_ptr.o
rm -f libftprintf.a
make[1]: Leaving directory '/home/und3rr00t/push_swap/turk_algo/ft_printf'
cc -Wall -Wextra -Werror -c main.c -o main.o
cc -Wall -Wextra -Werror -c parse_args.c -o parse_args.o
cc -Wall -Wextra -Werror -c push.c -o push.o
cc -Wall -Wextra -Werror -c swap.c -o swap.o
cc -Wall -Wextra -Werror -c rotate.c -o rotate.o
cc -Wall -Wextra -Werror -c reverse_rotate.c -o reverse_rotate.o
cc -Wall -Wextra -Werror -c utils.c -o utils.o
cc -Wall -Wextra -Werror -c sort.c -o sort.o
cc -Wall -Wextra -Werror -c turk_sort.c -o turk_sort.o
cc -Wall -Wextra -Werror -c turk_utils.c -o turk_utils.o
cc -Wall -Wextra -Werror -c turk_cost.c -o turk_cost.o
cc -Wall -Wextra -Werror -c turk_move.c -o turk_move.o
make[1]: Entering directory '/home/und3rr00t/push_swap/turk_algo/libft'
cc -Wall -Wextra -Werror -c ft_atoi.c -o ft_atoi.o
cc -Wall -Wextra -Werror -c ft_bzero.c -o ft_bzero.o
cc -Wall -Wextra -Werror -c ft_calloc.c -o ft_calloc.o
cc -Wall -Wextra -Werror -c ft_isalnum.c -o ft_isalnum.o
cc -Wall -Wextra -Werror -c ft_isalpha.c -o ft_isalpha.o
cc -Wall -Wextra -Werror -c ft_isascii.c -o ft_isascii.o
cc -Wall -Wextra -Werror -c ft_isdigit.c -o ft_isdigit.o
cc -Wall -Wextra -Werror -c ft_isprint.c -o ft_isprint.o
cc -Wall -Wextra -Werror -c ft_itoa.c -o ft_itoa.o
cc -Wall -Wextra -Werror -c ft_memchr.c -o ft_memchr.o
cc -Wall -Wextra -Werror -c ft_memcmp.c -o ft_memcmp.o
cc -Wall -Wextra -Werror -c ft_memcpy.c -o ft_memcpy.o
cc -Wall -Wextra -Werror -c ft_memmove.c -o ft_memmove.o
cc -Wall -Wextra -Werror -c ft_memset.c -o ft_memset.o
cc -Wall -Wextra -Werror -c ft_putchar_fd.c -o ft_putchar_fd.o
cc -Wall -Wextra -Werror -c ft_putendl_fd.c -o ft_putendl_fd.o
cc -Wall -Wextra -Werror -c ft_putnbr_fd.c -o ft_putnbr_fd.o
cc -Wall -Wextra -Werror -c ft_putstr_fd.c -o ft_putstr_fd.o
cc -Wall -Wextra -Werror -c ft_split.c -o ft_split.o
cc -Wall -Wextra -Werror -c ft_strchr.c -o ft_strchr.o
cc -Wall -Wextra -Werror -c ft_strdup.c -o ft_strdup.o
cc -Wall -Wextra -Werror -c ft_striteri.c -o ft_striteri.o
cc -Wall -Wextra -Werror -c ft_strjoin.c -o ft_strjoin.o
cc -Wall -Wextra -Werror -c ft_strlcat.c -o ft_strlcat.o
cc -Wall -Wextra -Werror -c ft_strlcpy.c -o ft_strlcpy.o
cc -Wall -Wextra -Werror -c ft_strlen.c -o ft_strlen.o
cc -Wall -Wextra -Werror -c ft_strmapi.c -o ft_strmapi.o
cc -Wall -Wextra -Werror -c ft_strncmp.c -o ft_strncmp.o
cc -Wall -Wextra -Werror -c ft_strnstr.c -o ft_strnstr.o
cc -Wall -Wextra -Werror -c ft_strrchr.c -o ft_strrchr.o
cc -Wall -Wextra -Werror -c ft_strtrim.c -o ft_strtrim.o
cc -Wall -Wextra -Werror -c ft_substr.c -o ft_substr.o
cc -Wall -Wextra -Werror -c ft_tolower.c -o ft_tolower.o
cc -Wall -Wextra -Werror -c ft_toupper.c -o ft_toupper.o
cc -Wall -Wextra -Werror -c ft_lstadd_back_bonus.c -o ft_lstadd_back_bonus.o
cc -Wall -Wextra -Werror -c ft_lstadd_front_bonus.c -o ft_lstadd_front_bonus.o
cc -Wall -Wextra -Werror -c ft_lstclear_bonus.c -o ft_lstclear_bonus.o
cc -Wall -Wextra -Werror -c ft_lstdelone_bonus.c -o ft_lstdelone_bonus.o
cc -Wall -Wextra -Werror -c ft_lstiter_bonus.c -o ft_lstiter_bonus.o
cc -Wall -Wextra -Werror -c ft_lstlast_bonus.c -o ft_lstlast_bonus.o
cc -Wall -Wextra -Werror -c ft_lstmap_bonus.c -o ft_lstmap_bonus.o
cc -Wall -Wextra -Werror -c ft_lstnew_bonus.c -o ft_lstnew_bonus.o
cc -Wall -Wextra -Werror -c ft_lstsize_bonus.c -o ft_lstsize_bonus.o
ar rcs libft.a ft_lstadd_back_bonus.o ft_lstadd_front_bonus.o ft_lstclear_bonus.o ft_lstdelone_bonus.o ft_lstiter_bonus.o ft_lstlast_bonus.o ft_lstmap_bonus.o ft_lstnew_bonus.o ft_lstsize_bonus.o ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strchr.o ft_strdup.o ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o
make[1]: Leaving directory '/home/und3rr00t/push_swap/turk_algo/libft'
make[1]: Entering directory '/home/und3rr00t/push_swap/turk_algo/ft_printf'
cc -Wall -Wextra -Werror -c ft_printf.c -o ft_printf.o
cc -Wall -Wextra -Werror -c ft_printf_utils.c -o ft_printf_utils.o
cc -Wall -Wextra -Werror -c ft_printf_hex_ptr.c -o ft_printf_hex_ptr.o
ar rcs libftprintf.a ft_printf.o ft_printf_utils.o ft_printf_hex_ptr.o
make[1]: Leaving directory '/home/und3rr00t/push_swap/turk_algo/ft_printf'
cc -Wall -Wextra -Werror main.o parse_args.o push.o swap.o rotate.o reverse_rotate.o utils.o sort.o turk_sort.o turk_utils.o turk_cost.o turk_move.o -L./libft -lft -L./ft_printf -lftprintf -o push_swap
```
```Bash
make clean
```
```Bash
ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
```

```
leet% ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5276
leet% ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5353
leet% ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5438
leet% ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5496
leet% ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5330
leet% ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5287
leet% ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5423
leet% ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5222
leet% 
```
