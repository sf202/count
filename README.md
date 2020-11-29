# count
Write a C program named as countD.c that takes input text file and a digit as arguments,
outputs how many times the digit appears in the file. If the text file does not exist, print out
an error message to the terminal. For example, sample outputs could be like below

$cat test.txt

This is a list of courses.

CSC 1010 - COMPUTERS & APPLICATIONS

$./countD test.txt 1

'1' appeared 2 times

$./countD NotExist.txt 1

Error: file not exist.
