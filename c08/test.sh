cp ./tests/ft_stock_str.h ./ex04
cp ./tests/ft_stock_str.h ./ex05
for i in $(find tests -name "*.c")
do
	echo "testing $i"
	cc -Wall -Wextra -Werror $i -o /tmp/test && time /tmp/test
	echo ""
done
rm ./ex04/ft_stock_str.h 
rm ./ex05/ft_stock_str.h 
