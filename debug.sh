#!/bin/bash

set -e

function debug_binary() {
    echo "Debugging"
    echo "-------"
    gdb a.out
}

function find_and_debug() {
    last_modified_cpp_file=$(ls -t | grep ".*\.cpp$" | head -1)
    g++ -g "$last_modified_cpp_file"
    debug_binary
}

find_and_debug
