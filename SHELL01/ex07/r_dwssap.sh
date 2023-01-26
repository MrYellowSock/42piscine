# echo "${FT_LINE1},${FT_LINE2}p" 
cat /etc/passwd | sed '/^#/d' | sed -n 'p;n'  | rev |  sed 's/.*:\(\S*\)/\1/' | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ',' | sed 's/,$/./' | sed 's/,/, /g' 

