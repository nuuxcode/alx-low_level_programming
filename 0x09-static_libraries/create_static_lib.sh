#!/bin/bash
gcc -c *.c
ar -r -c -s "liball.a" *.o