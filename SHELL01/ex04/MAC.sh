# -n : no print
# /p print the match
ifconfig | sed -n "s/.*ether \(\S*\)/\1/p"
