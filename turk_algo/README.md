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
```Bash
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
# Testing 500 args in fewer than 5500 moves :
ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
```

```Bash
❯ ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5276
❯ ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5353
❯ ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5438
❯ ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5496
❯ ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5330
❯ ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5287
❯ ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5423
❯ ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
5222
```
```Bash
# Testing 100 args in fewer than 700 moves :
❯ ./push_swap "-76329 -796677 -403234 -831890 -887468 -817138 -906717 -388993 -500079 -950786 -62734 -879622 -349753 -636819 -340873 -912535 -772960 -204243 -997928 -250126 -822136 -828803 -62898 -856906 -226618 -871715 -162342 -460415 -111320 -503357 -975193 -774018 -198664 -298960 -993350 -950443 -546083 -577123 -626614 -170090 -692775 -657455 -831276 -660066 -162008 -253806 -947087 -7493 -265564 -278448 -773307 -824493 -791124 -680731 -442230 -188855 -754310 -542165 -278261 -770199 -753215 -882294 -51867 -323555 -482045 -201985 -666358 -600827 -333893 -716257 -700740 -635569 -324977 -361077 -789120 -862918 -341212 -39806 -670231 -794297 -351310 -684073 -631749 -117192 -515799 -402974 -751821 -436788 -663224 -479167 -10891 -473388 -85736 -495229 -963297 -537700 -130586 -110305 -261716 -341848 " | wc -l
593
❯ ./push_swap  98138 414433 251687 989888 406164 730036 73291 95008 40626 995481 859325 355500 812649 428261 403977 815989 335520 977132 109729 485226 874330 940487 484821 929118 929020 596349 694316 197436 348207 649340 634406 13647 985527 872300 617123 947988 135366 149832 14806 223625 753215 458497 520695 467441 273017 609965 903008 415941 184657 912832 815445 333253 465118 36294 532065 384056 723966 229956 217836 828015 69500 641309 464350 357382 270732 166650 633283 51924 800723 297489 920034 599371 259285 420339 46500 967455 350226 501990 848817 569384 38929 317465 612286 186137 44078 363451 91463 747041 992187 169542 357189 510018 460638 207340 142304 727503 773428 734590 988516 844147 | wc -l
611
❯ ./push_swap  904254 308079 48867 312342 729596 214773 210845 900991 173760 940915 945202 985339 550060 490933 773725 500253 636111 800545 806702 537772 370902 662208 571073 739369 839608 300853 654258 568063 520846 893473 941670 363889 57541 262638 923232 292114 418704 587064 605575 418172 934104 741938 45720 198520 549199 393897 856406 557259 328407 611638 656018 700540 645495 200948 813374 976680 374278 89611 535895 808290 717725 402925 119999 350008 896172 740772 265863 358328 798724 350443 122064 689866 73401 553240 57092 449302 434522 311353 951791 580466 629818 988485 209666 393606 296121 397906 879051 486275 792331 839962 207197 898527 804443 670486 509439 398628 991542 531554 539119 175040 | wc -l
567

# You can pass args directly like above, or just do this:

❯ ARG=`ruby -e "puts (1..100).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
```
