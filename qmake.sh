#!/bin/bash
echo -n "Enter Question name: "
read question
mkdir $question

touch $question/"$question.cpp"
touch $question/input.txt
touch $question/output.txt
