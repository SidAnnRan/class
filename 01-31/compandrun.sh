#! /bin/bash

#This is a shell script that automates the compiling (using g++) and running of .cpp files

#Run g++ filename.cpp -o filename.bin
g++ $1.cpp -o $1.bin

#Run ./filename.bin
./$1.bin
