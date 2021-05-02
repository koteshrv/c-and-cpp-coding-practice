#!/bin/bash
echo -n "Enter Question name: "
read question
echo -n "Enter destination: "
read destination
cd $destionation
mkdir question

touch $question/"$question.cpp"
touch $question/input.txt
touch $question/output.txt

echo "${template}" > $question/"$question.cpp"
