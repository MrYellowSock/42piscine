COMPILER="cc -Wall -Wextra -Werror"
eval $COMPILER ./ex00/ft_print_program_name.c -o /tmp/0.out
eval $COMPILER ./ex01/ft_print_params.c -o /tmp/1.out
eval $COMPILER ./ex02/ft_rev_params.c -o /tmp/2.out
eval $COMPILER ./ex03/ft_sort_params.c -o /tmp/3.out

echo "ex00==========="
/tmp/0.out
echo "ex01==========="
/tmp/1.out
/tmp/1.out "Hello" 1 2 3 'world'
echo "ex02==========="
/tmp/2.out
/tmp/2.out "Hello" 1 2 3 'world'
echo "ex03==========="
/tmp/3.out
/tmp/3.out "Hello" 1 2 3 'world' z b x "wuss"
