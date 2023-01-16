# echo "${FT_LINE1},${FT_LINE2}p" 
cat /etc/passwd | sed '/^#/d' | sed -n 'p;n' |  sed 's/\(\S*\):.*/\1, /' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr -d '\n' | sed 's/, $/./'

