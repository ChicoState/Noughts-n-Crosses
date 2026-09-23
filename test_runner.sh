#!/bin/sh

g++ -std=c++17 -I. tests/runner.cpp -o noughts-crosses-tests
./noughts-crosses-tests