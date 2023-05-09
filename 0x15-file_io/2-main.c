#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}

/*
open file file_from with read and write
    if file_from does not exist, or if you can not read it,
        exit with code 98 and print Error: Can't read from file av[1]

    You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer

open file file_to with read and write
    Xif file_to already exists, truncate it

    Xif you can not create or if write to file_to fails,
    X    exit with code 99 and print Error: Can't write to av[2]

    Xif you can not close a file descriptor
        Xexit with code 100 and print Error: Can't close fd FD_VALUE
        XFD_VALUE is the value of the file descriptor

    XPermissions 664 of the created file: rw-rw-r--. If the file already exists, do not change the permissions

    XYou are allowed to use dprintf

    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp

    ./cp incitatous Incitatous
*/
