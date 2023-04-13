#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat(NULL,NULL);
    if (s == NULL)
    {
        printf("failed\n");
        fflush(stdout);
        return (1);
    }
    printf("%s\n", s);
    fflush(stdout);
    free(s);
    return (0);
}