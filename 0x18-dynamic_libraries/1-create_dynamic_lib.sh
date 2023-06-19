#!/bin/bash
gcc -c -fPIC *.c -o 
gcc -shared -o liball.so *.o
