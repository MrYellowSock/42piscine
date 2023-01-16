B="cc -c -Wall -Wextra -Werror"
ALL="$B ft_putchar.c && $B rush04.c && $B main.c  && gcc ft_putchar.o rush04.o main.o -o /tmp/program && /tmp/program"
eval $ALL
