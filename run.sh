#!/bin/bash

function run_complied_binary() {
    echo "Running"
    echo "-------"
    ./a.out
}

function find_and_compile_cpp() {
    last_modified_cpp_file=$(ls -t | grep ".*\.cpp$" | head -1)
    g++ "$last_modified_cpp_file"
    run_complied_binary
}

find_and_compile_cpp
