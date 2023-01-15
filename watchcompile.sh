echo $1 | entr -r sh -c "gcc $1 -o /tmp/test && /tmp/test"
