for i in $(find tests -name "*.c")
do
	echo "testing $i"
	cc -Wall -Wextra -Werror $i -o /tmp/test && /tmp/test
	echo ""
done
