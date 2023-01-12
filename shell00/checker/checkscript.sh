#!/bin/bash
echo "ex00"
cd ex00 && cat z
cd ..
read

echo "ex01"
cd ex01 
tar -xpf testShell00.tar 
vim -d <(ls -l testShell00) <(echo '-r--r-xr-x 1 XX XX 40 Jun 1 23:42 testShell00') 
cd ..
read

echo "ex02"
cd ex02 &&
tar -xpf exo2.tar && 
vim -d <(ls -l | sed '/.*exo2.tar/d') ../checker/check_ex02.txt
cd ..
read

echo "ex03"
cat ex03/id_rsa_pub
read

echo "ex04"
cd ex04
cat midLS
mkdir -f test
mkdir test/dir1
sleep 1s
touch test/file1
sleep 1s
touch test/dir2
sleep 1s
touch test/file0
cd test
vim -d <(bash ../midLS) <(printf '%s\n' "file0, dir2, file1, dir1/")
cd ../..
read

echo "ex05"
cd ex05
cat git_commit.sh
bash ./git_commit.sh
cd ..
read

echo "ex06"
cd ex06
cat git_ignore.sh
touch .DS_Store
touch mywork.c
touch innocent.c
printf ".DS_Store\nmywork.c" > .gitignore
bash ./git_ignore.sh
cd ..
read


echo "ex07"
cd ex07
vim -d b ../checker/check_ex07.txt
cd ..
read

echo "ex08"
cd ex08
cat clean
mkdir test
touch test/wow~
touch test/#sdfdf#
touch test/innocent
bash clean
echo '-> delete stop'
ls test/
cd ..
read

echo "ex09"
cd ex09
echo '0123456789012345678901234567890123456789142' > testme
file -m ft_magic testme
cd ..
