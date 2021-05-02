#!/bin/bash
DIR=$(pwd)
echo -n "Enter destination: "
read dir
cd $dir
echo -n "Enter Question name: "
read question
mkdir $question

touch $question/"$question.cpp"
touch $question/input.txt
touch $question/output.txt

cd $DIR
