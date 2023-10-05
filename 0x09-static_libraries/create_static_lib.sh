#!/bin/bash
gcc -c $(ls *.c | grep -v 'main.c')
rm -f liball.a
ar rc liball.a *.o

