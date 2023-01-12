git status --ignored=traditional --untracked-files=all -s | sed -n 's/!! \(\S*\)/\1/p' 
