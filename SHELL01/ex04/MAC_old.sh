ifconfig | fgrep 'ether ' | sed 's/ether //g' | tr -d "\t"
