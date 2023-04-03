#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *a;
    char *b;
    char *c;

    a = _strchr(s, 'l');
    b = _strchr(s, '\0');
    c = _strchr(s, 'x');

    if (a != NULL)
    {
        printf("%s\n", a);
    }
    else if (a == NULL)
    {
        printf("nullll\n");
    }
    if (b != NULL)
    {
        printf("%s\n", b);
    }
    else if (b == NULL)
    {
        printf("nullll\n");
    }
    if (c != NULL)
    {
        printf("%s\n", c);
    }
    else if (c == NULL)
    {
        printf("nullll\n");
    }
    return (0);
}