#!/bin/bash


#Variables

var1=Hello #Must be no spaces before/after =
var2="World"

#Multiple ways to echo
echo "$var1, $var2"
echo $var1", "$var2
echo $var1 $var2

#Store output of command in variable
var3=$(ls) 
echo $var3

echo #newline


#For if statements, see the new compandrun.sh


#Loops

#for until loops, see tutorial

#iterate through words in sentence
sentence='This is a sentence that I want to iterate through'
echo "For loop for words in sentence"
for word in $sentence
do
    echo $word
done

#iterate through numbers in range
echo
echo "For loop for numbers in range"
for i in {0..10}
do
    echo $i
done

#Create file called `file`

#iterate through words in file
echo
echo "For loop for words in file"
for line in $(cat file)
do
    echo $line
done

#iterate through lines in file
echo
echo "While loop for lines in file"
while read line; do
    echo "$line"
done < file

#iterate through files in directory
echo
echo "For loop for files in directory"
#Create directory and files
echo
echo "Creating directory and files"
mkdir textfiles
cd textfiles
for i in {1..5}
do
    filename="text$i.txt"
    touch $filename
    #for j in {1..$i} doesn't work
    for (( j=1; j<=$i; j++ ))
    do
        echo "File $i, Line $j" >> $filename
    done
done
#alternately,
#touch text{1..5}.txt
echo
echo "In directory:"
pwd
echo "Printing files in directory:"
for file in *.txt
do
    echo $file
    cat $file
    echo
done