#!/bin/bash

function run_prog() {
    echo "Running"
    echo "-------"
    ./a.out
}

function find_compile() {
    file=$(ls -t | grep ".*\.cpp$" | head -1)
    g++ "$file"
    run_prog
}

find_compile
