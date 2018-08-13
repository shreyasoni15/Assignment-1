#!/bin/bash
echo "Hello"
echo "What is your name?"
read Name
mkdir $Name
cd $Name
for i in 1 2 3 4 5
do
touch $Name$i.cpp
done
