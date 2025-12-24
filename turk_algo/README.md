## testing

```Bash
❯ make
❯ make clean
❯ ./push_swap <args>
```

### my test

```Bash
❯ make re
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
❯ ARG=`ruby -e "puts (1..500).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l
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

### memory leaks check

```Bash
❯ ARG=$(shuf -i 0-5000 -n 500 | tr '\n' ' '); valgrind ./push_swap $ARG | wc -l
==312171== Memcheck, a memory error detector
==312171== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==312171== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==312171== Command: ./push_swap 457\ 4832\ 79\ 4544\ 4328\ 4116\ 3823\ 4867\ 4432\ 3753\ 2215\ 1165\ 4775\ 1497\ 4156\ 3337\ 1674\ 1829\ 3743\ 3166\ 4541\ 2888\ 922\ 1924\ 1875\ 2284\ 1087\ 3102\ 1369\ 2426\ 3249\ 4532\ 4206\ 3200\ 652\ 2903\ 4991\ 2979\ 3954\ 2120\ 3124\ 2407\ 4726\ 280\ 1905\ 2633\ 348\ 1470\ 894\ 148\ 254\ 1143\ 1880\ 3524\ 1654\ 1805\ 2008\ 4850\ 981\ 3277\ 2380\ 4995\ 1928\ 3195\ 3903\ 1110\ 2713\ 90\ 1096\ 555\ 176\ 1564\ 834\ 3009\ 4872\ 1223\ 3633\ 2060\ 4513\ 3182\ 4820\ 3749\ 1050\ 1072\ 2322\ 4331\ 3856\ 304\ 107\ 3783\ 4757\ 346\ 4703\ 2988\ 435\ 591\ 2843\ 1500\ 212\ 54\ 1015\ 4412\ 4591\ 1285\ 4376\ 3140\ 3502\ 2826\ 3260\ 1363\ 4218\ 328\ 2475\ 4228\ 3368\ 3196\ 1667\ 4737\ 4111\ 3508\ 2642\ 4807\ 896\ 2627\ 3969\ 398\ 492\ 4478\ 4543\ 3161\ 4984\ 2127\ 1915\ 1106\ 3971\ 1588\ 911\ 4609\ 4032\ 3261\ 1495\ 3034\ 891\ 4033\ 3930\ 50\ 1204\ 4875\ 2890\ 3441\ 547\ 4048\ 3052\ 1988\ 1423\ 1240\ 1152\ 4812\ 1652\ 1980\ 3699\ 4565\ 162\ 303\ 3589\ 757\ 3513\ 3497\ 4180\ 2277\ 2058\ 2062\ 4475\ 3488\ 3968\ 1417\ 4275\ 2059\ 3690\ 4044\ 4377\ 1362\ 552\ 4852\ 1074\ 2628\ 4247\ 2185\ 3668\ 3354\ 3714\ 4410\ 2162\ 4308\ 3092\ 3402\ 1012\ 1332\ 3361\ 1171\ 3782\ 4579\ 960\ 4439\ 2386\ 4734\ 279\ 2787\ 4608\ 3917\ 38\ 4881\ 571\ 4329\ 1253\ 4015\ 4723\ 4518\ 4727\ 2711\ 3522\ 3446\ 3338\ 3073\ 3014\ 3575\ 4839\ 4335\ 4176\ 740\ 3747\ 1249\ 4978\ 568\ 2868\ 335\ 490\ 4813\ 3754\ 847\ 1714\ 3272\ 4600\ 1230\ 4122\ 503\ 1368\ 1045\ 3721\ 1474\ 2913\ 2544\ 1577\ 4330\ 964\ 1903\ 2067\ 1736\ 4776\ 1112\ 102\ 4446\ 4604\ 146\ 1770\ 1708\ 1555\ 4715\ 3392\ 349\ 166\ 3097\ 2430\ 907\ 522\ 4076\ 310\ 3790\ 3869\ 997\ 2449\ 4831\ 3264\ 2200\ 745\ 3739\ 2125\ 3761\ 2972\ 3477\ 4846\ 405\ 731\ 821\ 1191\ 709\ 4145\ 540\ 201\ 1755\ 4345\ 159\ 1303\ 21\ 2688\ 2420\ 1672\ 658\ 3989\ 4184\ 4296\ 3084\ 1378\ 2387\ 2723\ 2932\ 1594\ 3468\ 358\ 88\ 3119\ 2520\ 4905\ 2216\ 1200\ 901\ 3316\ 2165\ 3145\ 357\ 1033\ 4719\ 4722\ 1842\ 474\ 1185\ 3149\ 2446\ 3147\ 3323\ 1717\ 1524\ 3129\ 325\ 888\ 4578\ 749\ 657\ 2910\ 593\ 3369\ 215\ 2088\ 4087\ 142\ 513\ 3232\ 1341\ 1761\ 2809\ 2026\ 1630\ 2252\ 4449\ 4084\ 2041\ 1232\ 526\ 631\ 849\ 4732\ 1263\ 1352\ 180\ 445\ 4993\ 4417\ 2658\ 2413\ 4062\ 244\ 2849\ 4117\ 2810\ 1765\ 4635\ 4556\ 2321\ 1023\ 1018\ 3308\ 2686\ 684\ 2137\ 3121\ 1615\ 495\ 2416\ 2676\ 197\ 2597\ 3262\ 4505\ 4976\ 171\ 1264\ 4168\ 1704\ 3067\ 3077\ 1885\ 1786\ 617\ 2367\ 3986\ 508\ 4442\ 4486\ 515\ 4899\ 4891\ 643\ 1438\ 412\ 1433\ 4476\ 281\ 3537\ 1272\ 3972\ 1172\ 1133\ 2641\ 2891\ 3377\ 1996\ 1641\ 3916\ 4555\ 363\ 2778\ 1893\ 4552\ 4840\ 2457\ 1653\ 1904\ 3346\ 3979\ 743\ 4129\ 1058\ 2037\ 1482\ 2694\ 2625\ 305\ 118\ 4337\ 1296\ 2586\ 4019\ 775\ 3949\ 1525\ 4470\ 2163\ 3250\ 3362\ 4121\ 4101\ 598\ 3475\ 12\ 1479\ 1862\ 2879\ 3620\ 356\ 3562\ 3607\ 1406\ 2422\ 546\ 4618\ 2444\ 906\ 1850\ 1900\ 1954\ 101\ 815\ 421\ 317\ 2806\ 4957\ 2100\ 3807\ 1052\ 441\ 
==312171== 
==312171== 
==312171== HEAP SUMMARY:
==312171==     in use at exit: 0 bytes in 0 blocks
==312171==   total heap usage: 1,501 allocs, 1,501 frees, 28,394 bytes allocated
==312171== 
==312171== All heap blocks were freed -- no leaks are possible
==312171== 
==312171== For lists of detected and suppressed errors, rerun with: -s
==312171== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
5142
```

