#!/usr/bin/env bash
file_cpp=$1
file_name=$(echo ${file_cpp} | cut -d '.' -f 1)
echo "Compilando ${file_name}"
g++ -std=c++14 $file_cpp -o "${file_name}.o"
echo "Ejecutando, revisar output.txt"
"./${file_name}.o" < input.txt > output.txt