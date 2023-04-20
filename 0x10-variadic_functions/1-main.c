#include "variadic_functions.h"
#include <stddef.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    print_numbers("", 4, 0, 98, -1024, 402);
    print_numbers(NULL, 4, 0, 98, -1024, 402);
    print_numbers(NULL,0);
    return (0);
}
