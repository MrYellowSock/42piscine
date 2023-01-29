find . \( -name '*.c' \) | entr -r sh -c 'echo "-------" && norminette -R CheckForbiddenSourceHeader -R CheckDefine'
