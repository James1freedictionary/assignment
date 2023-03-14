#!/bin/bash -e
if tty -s;then echo "yes tty"; else echo "nope tty";fi
apt update 
apt install -y fonts-noto
fc-cache -f -v
chmod +x ../transfer.sh
xelatex 1.tex
./../transfer.sh 1.pdf

