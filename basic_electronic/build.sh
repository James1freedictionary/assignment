#!/bin/bash -ev

xelatex 1.tex
chmod +x ../transfer.sh
./../transfer.sh 1.pdf

