#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    char *concat;
    concat = string_nconcat("a", "bc", 10);
    printf("%s\n", concat);

    for (i = 0; i < (int)strlen(concat)+5; i++)
    {
        printf("%02x ", concat[i]);
    }
    printf("\n");
    free(concat);
    return (0);
}
