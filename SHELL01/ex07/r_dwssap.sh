# echo "${FT_LINE1},${FT_LINE2}p" 
cat /etc/passwd | sed '/^#/d' | sed -n 'p;n' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed 's/.*:\(\S*\)$/\1, /g' | tr -d '\n' | sed 's/, $/./'

