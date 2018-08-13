#!/bin/bash
echo "Hello"
echo "What is your first name?"
read FNAME
echo "What is your last name?"
read LNAME
mkdir $FNAME$LNAME
cd $FNAME$LNAME
touch $FNAME$LNAME.cpp
