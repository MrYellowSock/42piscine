echo $1 | entr -r sh -c "cc -Wall -Wextra -Werror $1 -o /tmp/test && /tmp/test"
