#!/bin/bash -e
#apt update 
#apt install -y fonts-noto
if tty -s;then echo "yes tty"; else echo "nope tty";fi 
chmod +x ../transfer.sh
xelatex 1.tex
./../transfer.sh 1.pdf
ls -R /usr/share
