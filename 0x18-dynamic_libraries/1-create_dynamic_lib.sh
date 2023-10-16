#!/bin/bash
gcc -fPIC -o *.c
gcc -shared *.c -o liball.so
