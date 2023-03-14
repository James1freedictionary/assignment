#!/bin/bash -e
chmod +x ../transfer.sh
xelatex 1.tex
./../transfer.sh 1.pdf
