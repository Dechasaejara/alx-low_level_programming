#!/bin/bash
# author: Dechasaejara
# This script create bash file and push to Github.

echo "What is your file name?"
read file_name

git add .
git commit -m "add $file_name"
git push origin master
clear
ls