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
    (void)ac;

    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}
