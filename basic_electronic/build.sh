#!/bin/bash -e
if tty -s;then echo "yes tty"; else echo "nope tty";fi 
chmod +x ../transfer.sh
pdflatex 1.tex
./../transfer.sh 1.pdf
